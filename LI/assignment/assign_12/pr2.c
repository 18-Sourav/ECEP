#include<stdio.h>
#include<sys/shm.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

void my_reverse(char*str, int len)
{
    int i = 0;
    while(i<len)
    {
        char temp = str[i];
        str[i++] = str[len];
        str[len--] = temp;
    }
}

int main()
{
    char buffer[100];
    //Creating a shared memory space
    int shmid = shmget('A',100,0644);

    sleep(5); //to wait for user ot enter the string 

    //attaching the shared memory
    char* str = (char*)shmat(shmid,0,0);

    my_reverse(str,strlen(str)-1);

    shmdt(str);

}

