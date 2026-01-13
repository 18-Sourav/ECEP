#include<stdio.h>
#define MAX_SIZE  100

int main()
{
    int size;
    scanf("%d",&size);
    int arr[MAX_SIZE];
    for(int i=0;i<size;i++)
        scanf("%d",&arr[i]);

        int element,pos;
        printf("Enter the element and the postion of insertion\n");
        scanf("%d %d",&element,&pos);


        if(pos>size || pos<0)
        {
             printf("No space available");
        }
        else
        {
          
             for(int i=size-1;i>=pos;i--)
            {
                arr[i+1]=arr[i];
            }
            size++;
            arr[pos]=element;
            
        }  
        printf("\n"); 
        for(int i=0;i<size;i++)
            printf("%d ",arr[i]);
        return 0;
         
}