/*Write a C program to print the half diamond star pattern using for loop.
 How to print half diamond star pattern structure using for loop in C program. 
Logic to print half diamond star pattern series in C programming.*/

/*   *
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
        for(int j=1;j<=i;j++)
                printf("*");
        printf("\n");    
    }
    for(int i=n-1;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
                printf("*");
        printf("\n");    
    }
    return 0;
}

