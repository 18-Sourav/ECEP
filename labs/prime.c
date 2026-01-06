#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int flag=1;
    for(int i=2;i<=n/2;i++)
    {
        if((n%i)==0)
        {
            flag=0;
            break;
        }   
    }
    printf("%d\n",flag);
    if(flag==1)
        printf("The entered number is a prime number");
    else 
        printf("The entered number is not a prime number");

    return 0;
}