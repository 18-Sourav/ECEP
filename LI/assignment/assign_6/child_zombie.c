#include<stdio.h>
#include<fcntl.h>
#include<sys/wait.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
    int ret = fork();

    if(ret ==0) //child
    {
        printf("Child Execution started\n");
        sleep(2);
        exit(0);
    }
    int pid ;
    while((pid = waitpid(ret,NULL,WNOHANG))==0);
    sleep(5);
    if(pid==ret)
        printf("Child excution is terminated\n");
}