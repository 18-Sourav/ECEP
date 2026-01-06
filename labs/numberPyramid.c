/*   1
    121
   12321
  1234321
 123454321
12345654321

*/
#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int k=n-i;k>0;k--)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(int l=i-1;l>0;l--)
            printf("%d",l);
        printf("\n");
    }
    return 0;
}
