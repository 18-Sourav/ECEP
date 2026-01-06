#include<stdio.h>

int main()
{
    int n,num,dig=0,count=0,rem=1;

    scanf("%d",&n);
    int temp=n;
    // To calculate the length of the binary number

    while(n!=0)
    {
        dig=n%10;
        n/=10;
        count++;
    }
    dig=0;
    printf("%d\n",count);
    for(int i=0;i<count;i++) // index
    {
        dig=temp%10;
        if(dig==1)
        {
            rem=1;
            for(int j=0;j<i;j++) // to get power of two
            {
                rem=rem*2;
            }
            num+=rem;  
        }
        temp/=10;
    }
    printf("%d",num);
    return 0;
}