#include<stdio.h>

int subArr(int *arr, int target , int size)
{
    
    {
        if(sum<target)
        {
            j++;
            sum+=arr[j];
            array[j]=arr[j];
        }
        if(sum==target)
        {
            int temp=j-i+1;
            if(temp>max)
                max=temp;
            i++;    
        }
        else
        {
            sum-=arr[i];
            i++;
        }
    }
    return 
}
int main()
{
    int arr[100];
    int size;
    scanf("%d",size);
    for(int i=0;i<size;i++)
        scanf("%d",&arr[i]);
    int target;
    scanf("%d",&target);

    int temp[20]= subArr(arr,size,target);

    for(int i=0;i<20;i++)
    {
        printf("%d ",temp[i]);
    }
    return 0; 

}