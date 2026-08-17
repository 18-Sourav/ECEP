#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/wait.h>

int main()
{
    int ret = fork();

    if(ret>0)
    {
        printf("Parent PID is %d\n",getpid());
        int status ;
        int pid = wait(&status);
        if(WIFEXITED(status))
        {
            printf("Parent is terminated normally %d\n",WEXITSTATUS(status));
        }
        else
        {
            printf("Child is terminated abnormally %d",status);
        }
    }
    else if(ret ==0)
    {
        printf("Child pid -> %d\n",getpid());
        sleep(5);
        printf("The child is terminated\n");
    }
    return 0;
}