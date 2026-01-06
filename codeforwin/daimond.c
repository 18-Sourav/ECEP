/* Write a C program to print the mirrored half diamond star pattern using for loop. 
How to print mirrored half diamond star pattern in C program. 
Logic to print mirrored half diamond star pattern in C programming. 

    * 
   * * 
  * * * 
 * * * * 
* * * * * 
 * * * * 
  * * * 
   * * 
    * 

*/

#include<stdio.h>

int main()
{
    int n;

    scanf("%d",&n);

    for(int i=1; i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(int i=n-1;i>=1;i--)
    {
        for(int k=1;k<=n-i;k++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
        
    }
    return 0;

}
