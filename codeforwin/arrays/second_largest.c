#include<stdio.h>

int sec_largest(int arr[],int n)
{
    for(int i=0;i<size;i++)
    {
        int lar= arr[0];
        int lar2;
        if(arr[i]<lar)
        {
            lar2=arr[i];
            break;
        }
        if(i==size-1) {
            printf("There is no Second largest element in the array\n");
            return 0;
        }
    }   
     
     for(int i=0;i<n;i++)
     {
        if(arr[i]>lar)
        {
            lar2=lar;
            lar=arr[i];
        }
        else if(arr[i]>lar2 && arr[i]<lar)
            lar2=arr[i];
     }
     return lar2;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
         scanf("%d",&arr[i]);
    
     printf("The second largest element is %d\n",sec_largest(arr,n));

     return 0;
}