#include<stdio.h>
#include<signal.h>
void my_own(int signum)
{
    printf("Seg fault sent by %d\n",signum);
    signal(SIGINT, SIG_IGN);
}
int main()
{
    printf("The pid is %d\n",getpid());
    signal(SIGINT,my_own);

    while(1)
        pause();
    //signal(SIGTSTP,my_own);
    //signal(SIGSEGV,my_own);
   // int *ptr =NULL;
   // printf("%d\n",*ptr);
}