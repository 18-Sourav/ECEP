#include<stdio.h>

void main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
     int* ptr=arr;
    for(int i=0;i<size;i++)
        scanf("%d",&arr[i]);

   

    //printing the array elements
    for(int i=0;i<size;i++)
    {
        printf("%d\n",i[arr]);
    }
    for(int i=0;i<size;i++)
        printf("%ld ",(long int)&ptr[i]);

        




   /* long int p =(long)&x;
    printf("%d\n",*ptr);
    printf("%lx\n",p); */
}