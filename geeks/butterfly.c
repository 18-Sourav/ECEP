/*

Input: 5
Output: 
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *


*/
#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
       for(int j=1;j<=i;j++)
        {
            printf("*");
        } 
        
        for(int l=1;l<=(2*n-2*i);l++)
        {
            printf(" ");
        }
        
         for(int k=1;k<=i;k++)
        {
            printf("*");
        }
    
    printf("\n");
    }
    for(int p=1;p<=n-1;p++)
    {
        for(int m=1;m<=n-p;m++)
            printf("*");
       
        for(int s=1;s<=2*p;s++)
        {
            printf(" ");
        }
        for(int o=1;o<=n-p;o++)
            printf("*");
        
         printf("\n");   
    }
    return 0;

}