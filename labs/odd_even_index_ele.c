#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int arr[n];
    int odd[n];
    int even[n];
    int a=0,b=0;

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            even[a]=arr[i];
            a++;
        }
        else
        {
            odd[b]=arr[i];
            b++;
        }
    }
    printf("\n The even index elements are: ");
    for(int i=0;i<a;i++)
    {
        printf("%d ",even[i]);
    }
    printf("\n The odd index elements are: ");
    for(int i=0;i<b;i++)
    {
        printf("%d ",odd[i]);
    }
    return 0;
}