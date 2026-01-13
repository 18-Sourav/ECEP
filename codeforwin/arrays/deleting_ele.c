#include<stdio.h>
#define MAX_SIZE 100

int main()
{
    int size,pos;
    scanf("%d",&size);
    int arr[MAX_SIZE];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the position to delete the element\n");
    scanf("%d",&pos);

    if(pos<0 || pos>size)
        printf("No element found");
    else
    {
        for(int i=pos;i<size;i++)
        {
            arr[i]=arr[i+1];
        }
        size--;
    }
    for(int i=0;i<size;i++)
        printf("%d",arr[i]);
    return 0;
}