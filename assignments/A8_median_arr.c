#include<stdio.h>

int main()
{
    int size1,size2;
    scanf("%d%d",&size1,&size2);
    //Checking the size condition
    if(size1<1||size2<1)
        return 0;

    int arr1[size1],arr2[size2];
    // reading the array
    for(int i=0;i<size1;i++)
        scanf("%d",&arr1[i]);

    for(int i=0;i<size2;i++)
        scanf("%d",&arr2[i]);

     // sortinng the first array

    int temp1=0,flag1=0;
     for(int i=0;i<size1-1;i++)
     {
      
        for(int j=0;j<size1-i-1;j++)
        {
            if(arr1[j]>arr1[j+1])
            {
                temp1=arr1[j];
                arr1[j]=arr1[j+1];
                arr1[j+1]=temp1;
                flag1=1;
            }
        }
        if(flag1==0)
            break;
     }   
     // sortinng the second array

    int temp2=0,flag2=0;
     for(int i=0;i<size2-1;i++)
     {
      
        for(int j=0;j<size2-i-1;j++)
        {
            if(arr2[j]>arr2[j+1])
            {
                temp2=arr2[j];
                arr2[j]=arr2[j+1];
                arr2[j+1]=temp2;
                flag2=1;
            }
        }
        if(flag2==0)
            break;
     }  

     // Meadian value of the array1
     float median1=0;
     if(size1%2==0)
        median1=(arr1[size1/2]+arr1[size1/2-1])/2;
    else
        median1=arr1[size1/2];

     // Meadian value of the array2
     float median2=0;
     if(size2%2==0)
        median2=(arr2[size2/2]+arr2[size2/2-1])/2;
    else
        median2=arr2[size2/2];

        printf("Median of array1 is %g\n",median1);
        printf("Median of array2 is %g\n",median2);
        printf("Median of both the arrays is %g \n",(median1+median2)/2);
    return 0;        
    
}