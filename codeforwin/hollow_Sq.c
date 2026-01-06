/*Write a C program to print hollow square or rectangle star(*) pattern series using for loop. 
How to print hollow square or rectangle star pattern of N rows using for loop in C programming.
Logic to print empty square or rectangle star pattern in C program.*/

/*       *****
         *   *
         *   *
         *   *
         *****          */

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for (int j=1;j<=n;j++)
        {
            if(i==1 || i==n || j==1 || j==n)
                printf("*");
           else 
                printf(" ");  
        }
        printf("\n");    
    }
    return 0;
}