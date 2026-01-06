/*

Input : n = 5
Output :
1
3*2
4*5*6
10*9*8*7
11*12*13*14*15

*/

#include<stdio.h>

int main()
{
    int n,count=1;
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=2*i-1;j++)
        {
           // printf("%d",count);
            //printf("*");
            count--;
           // printf("%d",count);
        }
    }
        printf("%d",sizeof (int));

    return 0;
}