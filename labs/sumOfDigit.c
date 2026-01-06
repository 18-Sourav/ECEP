#include<stdio.h>

int main()
{
    int n,res=0,sum=0;

    scanf("%d",&n);

    while(n>0)
    {
        res=n%10;
        sum+=res;
        n=n/10;
    }

    printf("%d", sum);
    return 0;
}