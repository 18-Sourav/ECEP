#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    char *wri = "Hello";
    char buff[100];
    int fd = open("f2.txt",O_CREAT|O_RDWR,0764);

    int ret = scanf("%s",buff);
    int res = write(fd, buff,ret);
    printf("No.of character written %d\n",res);
    return 0;
}