#include<stdio.h>

int main()
{
    int n;
    printf("Enter any number greater than one");
    scanf("%d",&n);
    while(n>0)
    {
        printf("%d\n",n);
        n--;
    }
    return 0;
}