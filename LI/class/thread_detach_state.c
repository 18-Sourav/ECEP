#include<stdio.h>
#include<pthread.h>
#include<unistd.h>

void *thread1(void *arg)
{
    while(1)
    {
        printf("The thread is running...\n");
        sleep(1);
    }

}

int main()
{
    pthread_t tid1;
    pthread_attr_t attr;
    pthread_attr_init(&attr);
    pthread_attr_setdetachstate(&attr,PTHREAD_CREATE_DETACHED);

    pthread_create(&tid1,&attr,(void*)thread1,NULL);

    pthread_join(tid1,NULL);

}