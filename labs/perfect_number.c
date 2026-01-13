#include<stdio.h>

int perfect(int n)
{
    int num=n,dig,sum=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
            sum+=i;
    }
    return sum;
}

int main()
{
    int num;
    scanf("%d",&num);
    int res =perfect(num);
    if(res==num)
        printf("It is a perfect number\n");
    else
        printf("It is not a perfect number\n");

        return 0;
}