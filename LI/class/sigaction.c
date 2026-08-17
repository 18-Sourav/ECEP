#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<signal.h>

void my_own(int signum,siginfo_t* info, void * arg)
{
    printf("The signal number is %d \n",info->si_signo);
    printf("The pid of the process sending signal is %lu\n",info->si_pid);


}

struct sigaction new_act;

int main()
{
    printf("The parent process id is %d\n",getpid());

    //creating the structure variable
 
    //setting the values
    memset(&new_act,0,sizeof(new_act));
    new_act.sa_sigaction = my_own; //simple signal handling
    new_act.sa_flags = SA_SIGINFO;
    
    sigaction(SIGINT,&new_act,0);
    while(1)
        pause();

}