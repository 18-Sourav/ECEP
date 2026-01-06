/*
    1
   232
  34543
 4567654
567898765

*/
#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int count=1,cnt=1;
    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=n-i;k++)
            printf(" ");
        for(int j=1;j<=i;j++)
        {
           
            printf("%d",count);
            count++;
        }
        for(int l=1;l<i;l++)
        {
            printf("%d",cnt);
            cnt--;
            
        }
        printf("\n");
        cnt=count;
        count=i+1;
    }
    return 0;
}