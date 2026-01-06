/*

Input : 5
Output:

* * * * *  * * * * *
* * * *      * * * *
* * *          * * *
* *              * *
*                  *
*                  *
* *              * *
* * *          * * *
* * * *      * * * *
* * * * *  * * * * *

*/
#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int j=n-i+1;j>=1;j--)
            printf("*");
        for(int k=2;k<2*i;k++)
            printf(" ");
        for(int m=n-i+1;m>=1;m--)
            printf("*");
        printf("\n");
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
            printf("*");
        for(int k=2*i;k<2*n;k++)
            printf(" ");
        for(int p=1;p<=i;p++)
            printf("*");
        printf("\n");
        }
    return 0;
}