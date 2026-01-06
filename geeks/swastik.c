/*Note: The number of rows and columns should be the same and an odd number. 
This will generate a perfect swastika pattern. 

Input : row = 7, column = 7        
Output:
*     * * * *
*     *
*     *
* * * * * * *
      *     *
      *     *
* * * *     *


*/

#include<stdio.h>
int main()
{
    int row,col;

    scanf("%d %d",&row,&col);

    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
             if(i<=(col+1)/2 && j==1 )
                printf("* ");
             else if(i==1 && j>=(col+1)/2)
                printf("* "); 
            else if(i==(row+1)/2 || j==(col+1)/2)
                printf("* ");
            else if(i==row && j<=(col+1)/2)
                printf("* ");
            else if(i>=(row+1)/2 && j==col)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}