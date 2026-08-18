#define _XOPEN_SOURCE 700
#include<stdio.h>
#include<time.h>
#include<unistd.h>
#include<signal.h>
#include<string.h>
#include<stdlib.h>

int flag;
void signal_handler(int signum, siginfo_t *info, void *argc)
{
    flag = 1;
}
int main(int argc, char*argv[])
{
    if(argc<2 || argc>3)
    {
        printf("Invalid time input given\n");
        exit(0);
    }

    struct sigaction new_act;
    memset(&new_act,0,sizeof(new_act));

    new_act.sa_sigaction = signal_handler;
    new_act.sa_flags = SA_SIGINFO;

    sigaction(SIGALRM,&new_act,0); //registering the signal

    time_t curr_time; //structure to store the current time in seconds
    struct tm get_time; //structure to store the given time in seconds

    time(&curr_time); //to get the current time in the seconds

    //to get the given time 
    strptime(argv[argc-1],"%T",&get_time);

    if(argc>2)
    {
        strptime(argv[argc-2],"%D",&get_time);
    }
    else
    {
        //const  time_t t_seconds; 
        struct tm *present = localtime(&curr_time); //saving the local date(today's)

        get_time.tm_mday = present->tm_mday;
        get_time.tm_mon = present->tm_mon;
        get_time.tm_year = present->tm_year;
    }

    //converting the time to seconds
    time_t g_time = mktime(&get_time);

    alarm(g_time-curr_time);
    while(1)
    {
        if(flag==1)
        {
            flag=0;
            printf("Alarm Occured\n");
            printf("Enter 1. for Stop, 2. for Snooze\n");
            int option=0,min=0;
            scanf("%d",&option);
            if(option==1)
                exit(0);
            else if(option==2)
            {
                printf("Enter the minutes\n");
                scanf("%d",&min);
                alarm(min*60);
            }   
        }     
    }






}