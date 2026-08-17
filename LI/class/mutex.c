#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<pthread.h>

int count;
pthread_mutex_t mutex;
void* thread1(void* arg)
{
    while(1)
    {
        pthread_mutex_lock(&mutex);
        count=0;
        count+=5;
        count+=10;
        printf("Thread1 -> %d\n",count);
        pthread_mutex_unlock(&mutex);
    }
}

void* thread2(void* arg)
{
    while(1)
    {
        pthread_mutex_lock(&mutex);
        count = 0;
        count+=5;
        count+=10;
        printf("Thread2 -> %d\n",count);
        pthread_mutex_unlock(&mutex);
    }
}

int main()
{
    pthread_t tid1,tid2;
    pthread_mutex_init(&mutex,NULL);
    pthread_create(&tid1,NULL,thread1,NULL);
    pthread_create(&tid2,NULL,thread2,NULL);

    pthread_join(tid1,NULL);
    pthread_join(tid2,NULL);
    pthread_mutex_destroy(&mutex);
}