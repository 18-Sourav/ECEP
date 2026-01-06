/*
1 2 3 4 5 
10 9 8 7 6 
11 12 13 14 15 
20 19 18 17 16 
21 22 23 24 25 
*/

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int count=0;

    for(int i=1;i<=n;i++)
    {
                for(int j=1;j<=n;j++)
                {
                    if(i%2!=0)
                    {
                        count++;
                        printf("%d ",count);
                    }   
                    else
                    {
                        printf("%d ",count);
                        count--; 
                    }   
                }
            printf("\n");
                count=count+n;
    }
    return 0;

}