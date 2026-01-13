#include<stdio.h>
#include<limits.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
         scanf("%d",&arr[i]);
    
     int lar2= INT_MIN;
     int lar= INT_MIN;
     
     for(int i=0;i<n;i++)
     {
        if(arr[i]>lar){
            lar2=lar;
            lar=arr[i];
        }
        else if(arr[i]>lar2 && arr[i]<lar)
            lar2=arr[i];
     }
     printf("%d\n",lar2);
     //printf("\n%d",lar);
     return 0;
}