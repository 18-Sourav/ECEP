#include<stdio.h>

int main()
{
    int x,n,sum=0,sum1=0;
    x=1;
    scanf("%d",&n);
    while(x<=n)
    {
        if(x%2==0)
        {
            sum+=x;
            printf("The number %d is an even number\n",x);
        }
        else
        {
            sum1+=x;
        }
        x++;
    }
    printf("The sum of all the even nos is %d\n",sum);
    printf("The sum of all the odd nos is %d\n",sum1);
    return 0;
}