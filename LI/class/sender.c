#include<stdio.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<string.h>
#include<unistd.h>

int main()
{
    //Creating the fifo
    int ret = mkfifo("my_fifo",0744);
    if(ret == -1)
    {
        perror("Fifo file creation error\n");
        return 1;
    }

    //opening the fifo file
    int fd = open("my_fifo",O_WRONLY);

    char buff[100];

    printf("Enter the data to be written:\n");
    scanf("%[^\n]",buff);

    write(fd,buff,strlen(buff));
}