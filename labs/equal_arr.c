#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d",&n);
     
    scanf("%d",&m);
    if(n!=m)
        return 0;

    int arr1[n];
    int arr2[m];

    for(int i=0;i<n;i++)
        scanf("%d",&arr1[i]);
   
    for(int i=0;i<m;i++)
        scanf("%d",&arr2[i]);

    int flag=0,flag1=0;
    for(int i=0;i<n;i++)
    {
        flag=0;
        for(int j=0;j<n;j++)
        {
            if(arr1[i]==arr2[j])
            {
                flag=1;
                break;
            }
            
        }
        if(flag==0)
        {
                flag1=1;
                break;
        }
    }
    if(flag1==0)
    {
        printf("Equal array");

    }
    else
        printf("Not equal");
    return 0;
}