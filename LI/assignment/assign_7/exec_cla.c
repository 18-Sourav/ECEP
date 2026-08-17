#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
#include<sys/wait.h>

int main(int argc, char *argv[])
{
    if(argc<2)
    {
        perror("Please enter the command as well in the CLA\n"); //atleast one command should be given in the CLA
        exit(0);
    }
    int ret = fork();
    if(ret == -1)
    {
        perror("Error in fork creation\n");
        exit(0);
    }
    if(ret == 0)
    {
        printf("Child Process created with pid %d\n",getpid());
        fflush(stdout);
        execvp(argv[1],argv+1);  //replacing the program with the CLA command instructions

        perror("Exec command failed\n");
        exit(0);
    }
    int status;
    while(wait(&status)==0); //waiting for the child to complete the process
    if(WIFEXITED(status))
        printf("The child exited with exit code %d\n",WEXITSTATUS(status));  //printing the exit code of the child

    return 0; //completed    

}