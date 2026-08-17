//file validation present or not then create
//open file 
//create 2 processes
//lock file each process


#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include <stdbool.h>


bool is_prime(int num)
{
    for(int i=2;i*i<num;i++)
    {
        if(num%i)
            return 0;
    }
    return 1;
}
void myget_prime(int num)
{
    printf("Prime Numbers till %d is :",num);
    for(int i=2;i<=num;i++)
    {
        if(is_prime(i))
            printf("%d",i);
    }
}

int main(int argc, char *argv[])
{
    int fd = open(argv[2],O_CREAT|O_WRONLY);
    if(argc==1)
    {
        perror("Please give a file name in CLA\n");
        return 0;
    }
    else if(argc==2)
        fd = open(argv[2],O_CREAT|O_WRONLY|O_TRUNC,0764);
    
    //To lock the file
    struct flock lock;
    lock.l_type = F_WRLCK;
    lock.l_start = 0;
    lock.l_whence = SEEK_SET;

    int num;
    scanf("%d",&num); //reading the number from the user

    int backup = dup(STDOUT_FILENO); //Taking backup of the stdout stream fd

    pid_t ret = fork();   //making 2 processes

    if(ret>0)             //parent
    {
        printf("PARENT PROCESS: locked file");

        fcntl(fd,F_SETLK,&lock); // Locking the file using fd and with command F_SETLK with insc in lock structure
        printf("PARENT PROCESS: writing to file f1.txt");

        dup2(fd,STDOUT_FILENO); //redirecting the output of printf to file
        
        myget_prime(num);

        dup2(backup,STDOUT_FILENO);
        printf("PARENT PROCESS: unlocked file");

        lock.l_type = F_UNLCK;

        fcntl(fd,F_UNLCK,&lock);   //Unlocking the file 
    }
    else if(ret == 0)  //child
    {


    }
}





