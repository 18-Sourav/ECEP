#include<stdio.h>

void sorting(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        int temp=0;
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
        scanf("%d",&arr[i]);
    sorting(arr,size);
    for(int i=0;i<size;i++)
        printf("%d ",arr[i]);

        return 0;
}