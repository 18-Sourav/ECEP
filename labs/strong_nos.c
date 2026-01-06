#include<stdio.h>

int main()
{
    int n,temp,res=0,dig;

    scanf("%d",&n);
    temp=n;
    int nos=1;

    while(n!=0)
    {
        dig=n%10;
        n/=10;
        nos=1;
        for(int i=1;i<=dig;i++)
        {  
            nos=nos*i;   
        }
        res=res+nos;
    }
    printf("%d\n",res);
    if(temp==res)
        printf("It is a strong number");
    else
        printf("It is not a strong number");
    return 0;
}