#include<stdio.h>

int main()
{
    int n, rev=0,rem;

    scanf("%d",&n);
    int num=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(rev==num)
    {
        printf("It is a Palindrome\n");
    }
    else 
         printf("It is not a Palindrome\n");
    return 0;
}