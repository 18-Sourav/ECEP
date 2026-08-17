#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/shm.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>


void to_uppercase(char *str, int len)
{
    if(str==NULL)
        return;
    for(int i=0;i<len && str[i]!='\0';i++)
    {
        if(str[i]>='a' && str[i]<='z')
            str[i]-=32;
    }
}

int main()
{
    int fd[2]; //to create a pipe
    pipe(fd);

    //creating the SHM
    int shmid = shmget('A',100,IPC_CREAT|0644);
    if(shmid == -1 && stderr)
    {
        perror("SHM creation failed\n");
        exit(0);
    }

    int ret = fork(); //child creation

    if(ret == 0)
    {
        close(fd[1]);
        char buffer[100];

        //reading from the pipe
        read(fd[0],buffer,sizeof(buffer));

        //To upper case
        to_uppercase(buffer,strlen(buffer));

        //attaching the shared memory
        char* shared = (char*)shmat(shmid,0,0);

        //writing into the shared memory
        strcpy(shared,buffer);
        printf("Data written on shared memory is %s\n",shared);

        //Detaching the shared memory
        if(shmdt(shared)== -1)
        {
            perror("Shmdt has failed\n");
            exit(1);
        }   
    }
    else
    {
        char buff[100];
        close(fd[0]); //closing the read end of the pipe

        printf("Enter the input string\n");
        scanf("%[^\n]", buff);

        //writing the string in the pipe
        write(fd[1],buff,strlen(buff)+1);

        //creating a fifo

        char *fifo_path = "/tmp/my_fifo";
        if(mkfifo(fifo_path,0666) == -1)
        {
            if(errno !=  EEXIST)
            {
                perror("mkfifo has failed\n");
                exit(0);
            }
        }

        //opeing the fifo in read mode
        int fd = open(fifo_path,O_RDONLY);
        if(fd == -1)
        {
            perror("Opening the fifo failed\n");
            exit(0);
        }

        char fifo_result[100];

        ssize_t bytes = read(fd,fifo_result,sizeof(fifo_result));
        if(bytes<=0)
        {
            perror("Reading from the fifo failed\n");
            exit(1);
        }
        
        printf("The string from the fifo is -> %s\n",fifo_result);
        close(fd);

        return 0;
        
    }
}


