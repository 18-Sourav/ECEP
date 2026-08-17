#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<signal.h>
#include<stdlib.h>


void my_own(int signum, siginfo_t* info, void *arg)
{
     printf("The signal number is %d\n",info->siginfo);
     exit(0);
}

int main()
{
    struct sigaction new_act;

    memset(&new_act,0,sizeof(new_act));
    new_act.sa_sigaction = my_own;
    new_act.sa_flags = SA_SIGINFO | SA_NOCLDSTOP | SA_NOCLDWAIT; //PARENT WILL RECIEVE THE SIGNAL ONLY WHEN CHILD IS TERMINATED

    sigaction(SIGCHLD,&new_act,0);

    int ret = fork();

    if(ret == 0)
    {
        printf("The child pid is %d\n",getpid());
        printf("The child pid is RUNNING\n");
        sleep(20);

    }
    else if(ret >0)
    {
        printf("The parent pid is %d\n",getpid());

        while(1)
            pause(); //sleeping till a signal is recieved
    }



}