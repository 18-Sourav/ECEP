/*
Input : 6
Output :
* *
* *
* * * *
* * * *
* * * * * *
* * * * * *

*/
#include<stdio.h>

int main()
{
    int n,num=2;
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=num;j++)
        {
            printf("*");
        }
        //printf("%d",i);
        printf("\n");
        if(i%2==0)
            num+=2;
    }
    return 0;

}