#include<stdio.h>

int main()
{
    int n,rev=0,res,num,first,new=0,nos=0;

    scanf("%d",&n);
    num=n;

    int last=n%10;
    while(n>0)
    {
        res=n%10;
        rev=rev*10+res;
        n/=10;
    }
    first=rev%10;
    while(rev>0)
    {
        new=rev%10;
        if(new==last)
            new=first;
        else if(new==first)
            new=last;
        nos=nos*10+new;
        rev/=10;
    }
    printf("Swapped nos is %d",nos);
    return 0;
}