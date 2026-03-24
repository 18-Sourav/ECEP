#include<stdio.h>

int main()
{
    int num;
    printf("Enter num: ");
    scanf("%d",&num);

    int mask=1;

    printf("After setting LSB=%d\n",num|mask);

    printf("After clearing LSB=%d\n",num&~mask);

    return 0;
}