#include<stdio.h>
#include<sys/shm.h>
#include<fcntl.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>

void my_reverse(char*str, int len)
{
    int i = 0;
    while(i<len)
    {
        char temp = str[i];
        str[i++] = str[len];
        str[len--] = temp;
    }
}
int main()
{
    //opening the same shared memory as in P1 process
    int shmid = shmget('A',100,0644);

    //attaching the share memory with this process
    char *str = (char*)shmat(shmid,0,0);

    char read[100];
    //copying the data to local buffer
    strcpy(read,str);
    printf("The read data from the shared memory is-> %s\n",read);

    //reversed the string
    my_reverse(read, strlen(read)-1);

    char *fifo_path = "/tmp/my_fifo";

    //opening the fifo in read mode
    int fd = open(fifo_path, O_WRONLY);
    if(fd == -1)
    {
        perror("Fifo Opening failed\n");
        exit(1);
    }

    //writing on fifo
    __ssize_t bytes = write(fd,read,sizeof(read));
    if(bytes == -1)
    {
        perror("Writing in fifo failed\n");
        close(fd);
        exit(1);
    }
    printf("Sucessfully wrote %ld bytes on fifo\n",bytes);
    close(fd);
    return 0;

}