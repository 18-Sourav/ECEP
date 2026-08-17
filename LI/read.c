#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    char buff[50];
    int fd =  open("f1.txt",O_CREAT|O_RDWR,0744);

    int res = read(fd,buff,5);
    buff[5] = '\0';
    printf("%s %d\n",buff,res);

    while(read(fd,buff,1)>0)
        printf("%s\n",buff);

    return 0;
}
