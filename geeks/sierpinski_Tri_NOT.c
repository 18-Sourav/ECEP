/* 

Input : n = 8
Output :
       * 
      * * 
     *   * 
    * * * * 
   *       * 
  * *     * * 
 *   *   *   * 
* * * * * * * * 

*/

#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=n/2;k++)
            printf(" ");
        for(int j=1;j<=i;j++)
        {
            if(i==n/2)
                printf("* ");

        }       

    }
}