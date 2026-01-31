#include<stdio.h>

int prime(int n,int index)
{
    if(index==n/2)
        return 0;
    if(n%index==0)
        return 1;
    else
        prime(n,index+1);

}
int main()
{
    int n;
    scanf("%d",&n);

    int flag=prime(n,2);

    if(flag==0)
        printf("It is a prime number");
    else
        printf("it is not a prime number");
    return 0;
}