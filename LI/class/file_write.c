#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd = open("f1.txt", O_CREAT|O_RDWR,0644);
    int backup = dup(1);
    close(1);
    dup(fd);
    printf("hello world\n");

    char buff[100];
    close(0);
    
   
}