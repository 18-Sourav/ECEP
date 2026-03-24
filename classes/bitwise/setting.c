#include<stdio.h>

int main()
{
    int num,n;

    printf("Enter the number: ");

    scanf("%d",&num);

    printf("Enter the bit to be set: ");
    scanf("%d",&n);

    int mask=1<<n;

    printf("After setting we get %d",num|mask);
}