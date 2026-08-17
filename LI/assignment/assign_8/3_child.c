#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>

int main()
{
    pid_t  pid1 = fork();
   
    if(pid1>0)
    {
        printf("Child 1 is created with pid %d\n",pid1);
        pid_t pid2 = fork();
        
        if(pid2>0)
        {
            printf("Child 2 is created with pid %d\n",pid2);
            pid_t pid3 = fork();
            
            if(pid3>0)
            {
                printf("Child 3 is created with pid %d\n",pid3);
                int status;
                int ret;
                for(int i=0;i<3;i++)
                {
                    ret = wait(&status); //returns the PID of the child terminated
                
                    if(WIFEXITED(status))   //if terminated normally
                        printf("Child %d is terminated with exit code %d\n",ret,WEXITSTATUS(status));  //printing the exit code
                }
            }
        }
    }
    return 0;
}