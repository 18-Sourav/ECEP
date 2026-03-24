#include<stdio.h>

void convertToBig(char *ptr, int size)
{
    int low=0, high= size-1;
    while(low<high)
    {
        char temp=ptr[low];
        ptr[low++]=ptr[high];
        ptr[high--]=temp;
    }
}

int main()
{
    int size,num;
    scanf("%d",&size);
    getchar();
    scanf("%x",&num);

    char * ptr= (char*)&num;

    convertToBig(ptr,size);

    printf("%x",num);




}