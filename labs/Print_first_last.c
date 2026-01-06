#include<stdio.h>

int main()
{
    int n,rev=0,res,num,last;

    scanf("%d",&n);
    num=n;

    int first=n%10;
    while(n>0)
    {
        res=n%10;
        rev=rev*10+res;
        n/=10;
    }
    last=rev%10;

    printf("First digit is %d and Last digit is %d\n", last,first);

    return 0;
}