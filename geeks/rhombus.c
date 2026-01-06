/*

Input : n = 4
Output : 
Solid Rhombus:
   ****
  ****
 ****
****

Hollow Rhombus:
   ****
  *  *
 *  *
****

*/
#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=n-i;k++)
        {
            printf(" ");
        }
        for(int j=1;j<=n;j++)
        {
            if(i==1||i==n/*||j==1||j==n*/) // for hollow rhombus include j condition
                printf("*");
            //else              // for hollow rhombus
                //printf(" ");
             else
                printf("*");   // for solid rhombus
        }
        printf("\n");
    }
    return 0;
}