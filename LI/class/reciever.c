#include<stdio.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<unistd.h>


int main()
{
    //opening the fifo file created earlier in read mode
    int fd = open("my_fifo",O_RDONLY);
    char buff[100];

    //read the message
    read(fd,buff,sizeof(buff));
    printf("The message got from the sender is : %s",buff);
}