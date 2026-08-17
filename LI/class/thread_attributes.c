#include<stdio.h>
#include<pthread.h>
#include<unistd.h>

pthread_attr_t attr;
void *fun1(void*arg)
{
    void *stack_addr;
    size_t stack_size;

    pthread_getattr_np(pthread_self(),&attr);
    pthread_attr_getstack(&attr, stack_addr,&stack_size);
    printf("The stack address is %p\n",stack_addr);
    printf("The stack size is %zu\n",stack_size);

}

int main()
{
    size_t size = 1024*1024;
    pthread_t tid1, tid2;
    pthread_attr_init(&attr);
    pthread_attr_setstacksize(&attr,size);
    pthread_create(&tid1,&attr,(void*)fun1,NULL);

    pthread_join(tid1,NULL);

}