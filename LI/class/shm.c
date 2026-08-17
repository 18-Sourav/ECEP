#include<stdio.h>
#include<sys/shm.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    //create shm
    int shmid = shmget('A',100,IPC_CREAT|0744);

    //Attach with shm
    char * buff = shmat(shmid,NULL,0); //as going to send strings
    printf("%s\n",buff);
    //writing the data 
    strcpy(buff,"Hello world");

    printf("%s",buff);

    //detach
    shmdt(buff);






}