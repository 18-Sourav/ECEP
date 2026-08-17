#include<stdio.h>
#include<signal.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<sys/wait.h>

void signal_handler(int signum, siginfo_t* info, void * arg)
{
    int status,pid;
    pid = wait(&status);
    if(WIFEXITED(status)) 
        printf("Child %d is terminated with exit code %d\n",pid,WEXITSTATUS(status));

}
int main()
{
    struct sigaction new_act;
    memset(&new_act,0,sizeof(new_act));

    new_act.sa_sigaction = signal_handler;
    new_act.sa_flags = 0; //normal handler

    sigaction(SIGCHLD,&new_act,0);
    int ret = fork();

    if(ret == 0)
    {
        printf("The child pid is RUNNING\n");
        sleep(5);
    }
    else
    {
        sleep(10);
        sleep(5);
        printf("parent is terminated\n");
    }
    return 0;
}