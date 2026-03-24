#include<stdio.h>

void print(int **ptr)
{
    for(int i=0;i<3;i++)
    printf("%d ",*ptr[i]);
}
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);

    int *ptr[3]={&a,&b,&c};

    print(ptr);
}