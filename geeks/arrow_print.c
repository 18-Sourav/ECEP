/*
Input : n = 5
Output : 

 *
  **
   ***
    ****
     *****
    ****
   ***
  **
 *

*/
#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<i;k++)
            printf(" ");
        for(int j=1;j<=i;j++)
            printf("*");
        printf("\n");
    }
    for(int i=1;i<n;i++)
    {
        for(int k=1;k<n-i;k++)
            printf(" ");
        for(int j=1;j<=n-i;j++)
            printf("*");
        printf("\n");
    }
    return 0;
}