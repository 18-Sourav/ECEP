#include<stdio.h>
#include<stdlib.h>
int sa (const void *a, const void *b)
{
    return *(int *)a > *(int *)b;
}

int main()
{
    int a[5]={9,2,6,1,7};

    qsort(a,5,sizeof(int),sa);

    for(int i=0;i<5;i++)
        printf("%d ",a[i]);

}
