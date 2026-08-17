#include<stdio.h>
#include<unistd.h>

int main()
{
    int ret = fork();

    if(ret>0)
    {
        sleep(20);
        printf("Parent process ID is %d\n",getpid());
    }
    else if(ret == 0) //child process
    {
        printf("Child process ID is %d\n",getpid());
        sleep(5);
    }
}