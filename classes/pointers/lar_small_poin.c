#include<stdio.h>

void lar_small(int arr[],int size,int *lar,int* small)
{
    *lar=arr[0];
    *small=arr[0];

    for(int i=1;i<size;i++)
    {
        if(arr[i]>*lar)
            *lar=arr[i];
        if(arr[i]<*small)
            *small=arr[i];
    }
}
int main()
{
    int size;
    int lar,small;
    scanf("%d",&size);
    int arr[size];

    for(int i=0;i<size;i++)
        scanf("%d",&arr[i]);

    lar_small(arr,size,&lar,&small);    
    printf("largest is %d and smallest is %d",lar,small);

    return 0;


}