#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>


struct marks
{
    int math;
    int eng;

};

int arr[10] = {1,2,3,4,5,6,7,8,9,10};

void *fun1(void *arg)
{
    struct marks *a = (struct marks *)arg;
    int *sum = (int*)malloc(sizeof(int));
    *sum = a->math+a->eng;

    printf("The marks in emglish is %d\n",a->eng);
    printf("The marks in math is %d\n",a->math);

    return (void*)sum;
}
void *fun2(void* arg)
{
    int *ptr = (int*)arg;
    int * sum = malloc(sizeof(int));

    for(int i=0;i<10;i++)
        *sum+=ptr[i];
    
    return (void*)sum;
}


int main()
{
    pthread_t tid1, tid2;
    int a = 10;

    struct marks std1;
    std1.eng = 90, std1.math = 95;

    void *sum;
    void *ptr;
    pthread_create(&tid1,NULL,(void*)fun1,&std1); //create thread 1

    pthread_create(&tid2,NULL,(void*)fun2,arr);
    pthread_join(tid2,&ptr);
    printf("The sum of array is %d\n",*(int*)ptr);

    pthread_join(tid1,&sum);
    printf("The sum of marks is %d\n",*(int*)sum);

}