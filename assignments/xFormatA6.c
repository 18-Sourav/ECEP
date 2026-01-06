/*  
If n = 5, then,
1___5
_2_4_
__3__
_2_4_
1___5

*/
#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==j)            // printing the left diagonal
                printf("%d",i);
            else if((n-i+1)==j)    // printing the right diagonal 
                printf("%d",j);     // we can also use (i+j=n+1)
            else
                printf(" ");    // printing the spaces
        }
        printf("\n");
    }
}