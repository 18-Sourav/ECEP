#include<stdio.h>

int main()
{
    int n,res,sum=0,num;
    
    scanf("%d",&n);
    num=n;

    for (int i=1;i<=n;i++)
    {
        res=n%i;
        if(res==0)
            sum+=i;
    }
    if(sum/2==num)
        printf("The number is a perfect number");
    else 
        printf("The numnber is not a perfect number");

        return 0;


    
}