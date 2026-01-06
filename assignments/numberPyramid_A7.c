/*
    5
    45
    345
    2345
    12345
    2345
    345
    45
    5
*/
#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    for(int i=n;i>0;i--) // starting in reverse order
    {
        for(int j=i;j<=n;j++) // printing the values
        {
            printf("%d",j);
        }
        printf("\n");
    }
    for(int i=1;i<=n-1;i++)  // printing the lower traingle
    {
        for(int j=i+1;j<=n;j++)
            printf("%d",j);

            printf("\n");
    }
    return 0;
}