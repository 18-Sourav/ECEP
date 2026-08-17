#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>


int main()
{
    int fd[2];
    if(pipe(fd)==-1)
    {
        perror("Pipe Failed\n");
        exit(0);
    }

    int ret = fork();
    if(ret == -1)
    {
        perror("Fork command failed\n");
        exit(0);
    }

    if(ret == 0)  //child
    {
        close(fd[1]); //closing the write end

        dup2(fd[0],STDIN_FILENO);

        execlp("grep","grep",".c",NULL);
        
    }
    //parent
    close(fd[0]); //closing the read end

    dup2(fd[1],STDOUT_FILENO);

    execlp("ls","ls",NULL); //writing the ls command output in the pipe
}