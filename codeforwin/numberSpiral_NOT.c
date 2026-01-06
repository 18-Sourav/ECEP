/*  Print a pattern of numbers from  to  as shown below. Each of the numbers is separated by a single space.

                            4 4 4 4 4 4 4  
                            4 3 3 3 3 3 4   
                            4 3 2 2 2 3 4   
                            4 3 2 1 2 3 4   
                            4 3 2 2 2 3 4   
                            4 3 3 3 3 3 4   
                            4 4 4 4 4 4 4   
*/

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n-1;i++)
    {
        int num=n;
        for(int j=1;j<=2*n-1;j++)
        {
            if(i+j<=n+1)
                printf("%d",n);
            else if ()
                printf(" ");       
        }
        printf("\n"); 
    } 
    
    return 0;
}