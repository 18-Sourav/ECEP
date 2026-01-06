/*      1 1 1 1 1 
        2       4 
        2       4 
        2       4 
        3 3 3 3 3 
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
            if(i==1)
                printf("1 ");
            else if(i==n)
                printf("3 ");
            else if(j==1)
                printf("2 ");
            else if(j==n)
                printf("4 ");
            else 
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}