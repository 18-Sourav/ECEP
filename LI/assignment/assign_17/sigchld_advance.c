#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<signal.h>
#include<stdlib.h>

void my_own(int signum,siginfo_t* info, void * arg)
{
    printf("The pid of the child process is %u\n",info->si_pid);
    printf("The exit status is %d\n",info->si_status);
    exit(0);
}

struct sigaction new_act;

int main()
{

    struct sigaction new_act;
    memset(&new_act,0,sizeof(new_act));
    new_act.sa_sigaction = my_own; //simple signal handling
    new_act.sa_flags = SA_SIGINFO|SA_NOCLDWAIT;

    
    sigaction(SIGCHLD,&new_act,0);
    int ret = fork();

    if(ret == 0)
    {
        printf("The child is RUNNING\n");
        sleep(2);
    }
    else
    {
        while(1)
            pause();
    }
    
}