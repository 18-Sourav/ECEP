#include<stdio.h>
#include<unistd.h>

int main()
{
    printf("Hello\n");
    execlp("ls","ls",NULL);

}