#include<stdio.h>
unsigned long int factorial(int n)
{
    unsigned long int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%lu\n",factorial(n));
    return 0;

}