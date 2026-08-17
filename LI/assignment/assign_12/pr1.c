#include<stdio.h>
#include<sys/shm.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>

void my_uppers(char *str, int len)
{
    for(int i=0;i<len &&str[i]!='\0';i++)
    {
        if(str[i]>='a' && str[i]<='z')
            str[i]-=32;
    }
}
int main()
{
    char buffer[100] = {0};
    //Creating a shared memory space
    int shmid = shmget('A',100,IPC_CREAT|0644);
    if(shmid == -1)
    {
        perror("shmid failed\n");
        exit(1);
    }

    //attaching the shared memory
    char* str = (char*)shmat(shmid,NULL,0);
    if(str == (void*)-1)
    {
        perror("Attaching the shared memory failed\n");
        exit(0);
    }

    printf("Enter the string -> ");
    scanf("%[^\n]",buffer);

    //converting to upper case
    my_uppers(buffer,strlen(buffer));
    printf("String after uppercase-> %s\n",buffer);

    //writing the string into shared memory
    if(strcpy(str,buffer)== NULL)
    {
        perror("strcpy failed\n");
        exit(1);
    }
    printf("the string from the shared memory-> %s\n",str);

    sleep(10);  //waiting for the process 2 to reverse the shared memory string

    //printing from the shared memory
    printf("The manipulated string is %s\n",str);

    shmdt(str);



}