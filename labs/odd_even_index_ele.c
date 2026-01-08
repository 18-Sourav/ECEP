#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int arr[n];
    int odd[n];
    int even[n];
    int even_ele[n];
    int odd_ele[n];
    int a=0,b=0,c=0,d=0;

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++) // even odd index elements
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
    for(int i=0;i<n;i++) // even odd elements
    {
        if(arr[i]%2==0)
        {
            even_ele[c]=arr[i];
            c++;
        }
        else
        {
            odd_ele[d]=arr[i];
            d++;
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
     printf("\n The even elements are: ");
    for(int i=0;i<c;i++)
    {
        printf("%d ",even_ele[i]);
    }
    printf("\n The odd elements are: ");
    for(int i=0;i<d;i++)
    {
        printf("%d ",odd_ele[i]);
    }
    return 0;
}