#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    //to check the length
    int count=0,num=n,sum=0,sum1=1,res=n;
        while(num!=0)
    {
        num=num/10;
        count++;
        if(num==0)
        for(int j=1;j<=count;j++)
        {
            int rem=n%10;
            sum1=1;
            for(int i=1;i<=count;i++)
            {
                sum1=sum1*rem; 
            }
            sum=sum+sum1;
            n/=10;   
        }    
    }
    if(sum==res)
        printf("it is an armstrong number");
    else
        printf("it is not an armstrong number");
   
    printf("\n%d",sum);
    return 0;

}