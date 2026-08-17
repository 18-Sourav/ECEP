#include<stdio.h>
#include<unistd.h>
#include<string.h>
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
    if(ret==0)
    {
        printf("This is Child process\n");
        char ch;
        close(fd[1]);

        while(read(fd[0],&ch,1))
            write(STDOUT_FILENO,&ch,1);
        printf("\n");    
        exit(0);    
    }
    printf("This is Parent process\n");
    char *buffer = "Helloo Guys";
    close(fd[0]);
    write(fd[1],buffer,strlen(buffer)+1);
        

}