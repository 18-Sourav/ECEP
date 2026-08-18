#include<stdio.h>
#include<semaphore.h>
#include<pthread.h>
#include<unistd.h>

sem_t count;
void* producer(void*arg)
{
    int data;
    for(int i= 1;i<=5;i++)
    {
        data  = i;
        printf("Producer produced the product %d \n",data);
        sem_post(&count);
        sleep(1);
    }
}
void* consumer(void *arg)
{
    int data;
    for(int i=1;i<=5;i++)
    {
        sem_wait(&count);
        data = i;
        printf("The consumer %d consumed the item\n",data);
    }
}

int main()
{
    pthread_t tid1,tid2;

    sem_init(&count,0,0);

    pthread_create(&tid1,NULL,producer,NULL);
    pthread_create(&tid2,NULL,consumer,NULL);

    pthread_join(tid1,NULL);
    pthread_join(tid2,NULL);

}


