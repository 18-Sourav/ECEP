#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<signal.h>
#include<stdlib.h>

void my_own_sigsegv(int signum,siginfo_t* info, void * arg)
{
    printf("SEGMENTATION OCCURED\n");
    printf("The signal number is %d\n",info->si_signo);
    printf("Address causing the error is %p",info->si_addr);
    exit(0);

}
//creating the structure variable
struct sigaction new_act;

int main()
{
    
    printf("The parent process id is %d\n",getpid());
 
    //setting the values
    memset(&new_act,0,sizeof(new_act));
    new_act.sa_sigaction = my_own_sigsegv;
    new_act.sa_flags = SA_SIGINFO;  //to get info of the signal we use this flag

    sigaction(SIGSEGV,&new_act,0);

    char *ptr = "Hello";

    ptr[0] = 'w';
}