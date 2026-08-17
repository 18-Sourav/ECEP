#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
    __pid_t ret = fork();

    if(ret>0) //parent process
    {
        printf("The parent process is executing\n");
        printf("The parent process ID is %d\n",getpid());
    }
    else if(ret ==0)
    {
        printf("THe child process is executing\n");
        printf("The child process id is %d\n",getpid());
    }
    return 0;


   

}