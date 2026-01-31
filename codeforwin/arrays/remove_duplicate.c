#include<stdio.h>

int main()
{
    int size;
    scanf("%d",&size);

    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=1;i<size;i++)
    {
        if(arr[i]==arr[i-1])
        {
            for(int j=i;j<size-1;j++)
            {
                arr[j]=arr[j+1];
            }
            size--;
            i--;// checking from the same index
        }
        
    }
    
   // printing
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}