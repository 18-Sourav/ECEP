#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/wait.h>
#include <bits/waitflags.h>

int main()
{
    int ret = fork();

    if(ret>0)
    {
        int ret1 = fork();

        if(ret1>0)
        {
            printf("The child 2 pid is %d\n",ret1);

            int pid = waitpid(ret1,NULL, WNOHANG);

            printf("Parent is termianted\n");
        }
        else if(ret1==0)
        {
            sleep(30);
            printf("Child 2 is terminated\n");
        }

    }
    else if(ret==0)
    {
        sleep(5);
        printf("The child is terminated\n");
    }
}