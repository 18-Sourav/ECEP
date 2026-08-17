#include<stdio.h>
#include<stdarg.h>

void addition(int count,...)
{
    va_list ap;
    va_start(ap,count);

    int sum =0;
    for(int i=0;i<count;i++)
        sum+=va_arg(ap,int);

        printf("%d\n",sum);
    va_end(ap);    

}
void fun(int count,...)
{
    va_list ap;
    va_start(ap,count);

    for(int i=0;i<count;i++)
        printf("%s ", va_arg(ap,char*));
    printf("\n");
    va_end(ap);

}

int main()
{

    addition(2,10,20);
    addition(4,1,2,3,4);
    addition(3,2,4,3);

    fun(3,"Virat","Dhoni","Imran");

    return 0;

}