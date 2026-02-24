#include<stdio.h>
#include<limits.h>

int minsize(int arr[],int size, int target)
{
    int j=0,sum=0;
    int c_min=INT_MAX;
    for(int i=0;i<size;i++)
    {
        sum+=arr[i];
        int count=0;
        while(sum>=target)
        {
            sum-=arr[j];
            count=i-j+1;
            j++;
            if(c_min>count)
                c_min=count;
        }
        
    }
        return c_min;

}
int main()
{
    int size, target;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
        scanf("%d",&arr[i]);

    printf("Enter target\n");
    scanf("%d",&target);

    int res=minsize(arr,size,target);
    printf("The minimum length of subarray is %d",res);

    return 0;
}