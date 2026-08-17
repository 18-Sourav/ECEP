
//replace the pipe with null and save the next pos for command starting position in argv
//create pipe 
//make child1
//redirect the child 1 write fd to pipe..
//then use excecvp(argv[1],argv+1);
//output present in pipe1
//create the pipe2 then create child 2
//close the write end of the pipe1
//now for second command read from pipe1 by redirecting the stdin to pipe1 read
//then execute the execvp(argv[3],argv+3);
//close the read end of pipe2

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/wait.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
{
    if(argc<6)
    {
        perror("The number of arguments is less\n");
        exit(0);
    }
    int i = 0,j=0;
    int cmd_indx[2]; //to store the starting index of the next 2 commands
    while(argv[i])
    {
        if(strcmp(argv[i],"|")==0)
        {
            cmd_indx[j++] = i+1;
            argv[i] = NULL;
        }
        i++;
    } 
    int fd[2];
    pipe(fd); //creating pipe between the child 1 and chil2
    int ret1 = fork(); 

    if(ret1 == 0)
    {
        close(fd[0]);
        dup2(fd[1],STDOUT_FILENO);
        execvp(argv[1],argv+1);
    }
    if(ret1>0)
    {
        //creating the second pipe and child2
        int fd1[2];
        pipe(fd1);
        int ret2 = fork();


        if(ret2 == 0) //child2
        {
            close(fd[1]); //close the write end of pipe1
            dup2(fd[0],STDIN_FILENO);
            close(fd1[0]);
            dup2(fd1[1],STDOUT_FILENO);
            execvp(argv[cmd_indx[0]],&argv[cmd_indx[0]]);
        }
        if(ret2>0)
        {

            int ret3 = fork(); //child 3

            if(ret3 ==0)
            {
                close(fd1[1]);
                close(fd[0]); //closing the parent pipe1
                close(fd[1]);
                dup2(fd1[0],STDIN_FILENO);
                execvp(argv[cmd_indx[1]],&argv[cmd_indx[1]]);
            }
            close(fd1[0]);
            close(fd1[1]);

        }
        close(fd[0]);
        close(fd[1]);
        
    }

}

