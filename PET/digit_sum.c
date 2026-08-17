#include<stdio.h>

int digit_sum(int num)
{
    int sum=0;
    while(num)
    {
        int digit = num%10;
        sum+=digit;
        num/=10;
    }
    return sum;
}

int main()
{
    int num;
    scanf("%d",&num);

    int sum=num;
    while(1)
    {
        sum = digit_sum(sum);
        if(sum<=9)
            break;        
    }
    printf("%d ",sum);
    return 0;
}