#include<stdio.h>
#include<pthread.h>
#include<semaphore.h>
#include<unistd.h>

sem_t count ; //semapohore variable

void* thread(void * arg)
{
    int id = *(int*)arg;
    printf("Thread %d is waiting\n",id);
    sem_wait(&count);
    printf("Thread %d is entering the critical section\n",id);
    sleep(5);
    printf("The tread %d is leaving the critical section\n",id);
    sem_post(&count); 


}

int main()
{
    pthread_t tid[6];
    int id[6];

    //sem_init(&count,0,1); similar to mutex
    sem_init(&count,0,4);
    for(int i=0;i<6;i++)
    {
        id[i] = i+1;
        pthread_create(&tid[i],NULL,thread,&id[i]);
    }
    for(int i=0;i<6;i++)
    {
        pthread_join(tid[i],NULL);
    }

}