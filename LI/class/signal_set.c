#include<stdio.h>
#include<signal.h>
#include<stdlib.h>
#include<string.h>

void my_own(int signum, siginfo_t *info, void *buff)
{
    printf("the pid of the process is %d\n",getpid());
    for(int i=0;i<10;i++)
    {
        printf("The signal number is %d\n",info->si_signo);
        sleep(1);
    }
}

int main()
{
    struct sigaction new_act;

    memset(&new_act,0,sizeof(new_act));
    new_act.sa_sigaction = my_own;
    new_act.sa_flags = SA_SIGINFO;

    sigaction(SIGINT, &new_act, NULL);
    sigaction(SIGTSTP, &new_act,NULL);

    while(1)
        pause();


}