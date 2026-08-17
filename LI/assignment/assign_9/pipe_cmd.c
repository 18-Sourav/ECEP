#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<sys/wait.h>


int main(int argc, char *argv[])
{
    if(argc < 4)
    {
        perror("The number of arguments are less\n");
        exit(0);
    }
    int cmd_indx = 0;
    int i=0;
    while(argv[i])
    {
        if(strcmp(argv[i],"|")==0)
        {
            argv[i] = NULL;
            cmd_indx = i+1; //storing the next command starting index
            break;
        }
        i++;
    }
    int fd[2]; // pipe fd
    pipe(fd);
    int ret1 = fork(); //child1 is created

    if(ret1 == 0) //child 1
    {
        close(fd[0]); // pipe1 read end is closed
        dup2(fd[1], STDOUT_FILENO); //redirecting the write end to stdout
        execvp(argv[1],argv+1);
    }
    int ret2 = fork(); //child2 is created

    if(ret2 == 0) //child 2
    {
        close(fd[1]); //closing the write end of the child 2
        dup2(fd[0],STDIN_FILENO); //redirecting the read end to stdin
        execvp(argv[cmd_indx],&argv[cmd_indx]);
    }

    close(fd[0]);
    close(fd[1]);
    waitpid(ret1,NULL,0);
    waitpid(ret2,NULL,0);

    return 0;
}