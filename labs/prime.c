#include<stdio.h>
int prime(int n)
{
    int flag=1;
    for(int i=2;i<=n/2;i++)
    {
        if((n%i)==0)
        {
            return 0;
        }   
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d",&n);
   
    int res=prime(n);
    if(res==1)
        printf("The entered number is a prime number\n");
    else 
        printf("The entered number is not a prime number\n");

    return 0;
}