#include<stdio.h>

int main()
{
    int n,num=0;
    scanf("%d",&n);
    int dig,count=1;

    while(n!=0)
    {
        dig=n%10;
        num=n/10;
        n/=10;
        count =1;
        while(num!=0)
        {
            if(num%10==dig)
                count++;

            num/=10;   
        }
        printf("The number %d appeared %d times\n", dig,count);
    }
    return 0;


}