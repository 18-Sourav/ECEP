//sum and product of a number are same.
// Eg.- 6- 1*2*3 
//      6- 1+2+3 

#include<stdio.h>

int main()
{
    int n,rev,pro=1,sum=0;
    scanf("%d",&n);

    while(n>0)
    {
        rev=n%10;
        sum+=rev;
        pro*=rev;
        n/=10;
    }
    if(pro==sum)
        printf("It is a spy Nos\n");
    else
        printf("It is not a spy Nos\n");

    return 0;

}