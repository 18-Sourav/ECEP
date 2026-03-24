#include<stdio.h>

int main()
{
    int num;

    printf("Enter the number\n");
    scanf("%d",&num);
    int mask=1;

    if(num&mask)
        printf("Odd number");
    else
        printf("Even number");

    return 0;    
}