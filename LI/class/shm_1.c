#include<stdio.h>
#include<sys/shm.h>
#include<unistd.h>
#include<string.h>

int main()
{
    int shm_id = shmget('A',100,0744);

    //attach to shm
    char *str = shmat(shm_id,NULL,0);

    strcpy(str, "Hello morning");

    sleep(15);
    printf("%s",str);
    shmdt(str);
}