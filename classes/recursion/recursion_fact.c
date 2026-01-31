#include<stdio.h>

unsigned long int fact(int n)
{
    if(n==0)
        return 1;
    else
    return n*fact(n-1);
}
int main()
{
    unsigned long int res,n;
    scanf("%lu",&n);

    res=fact(5);
    printf("%lu",res);
    return 0;
}