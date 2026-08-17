// Q 18.1- WAP to delete duplicates in a char array without creating a new array

#include <stdio.h>

char * remove_dup(char *arr)
{
    int freq[128]={0};
    int i=0;
    while(arr[i])
    {
        freq[arr[i]]++;
        if(freq[arr[i]]>1)
        {
            int j=i;
            while(arr[j])
            {
                arr[j]=arr[j+1];
                j++;
            }
        }
        else
            i++;  
    }
    return arr;
}
int main()
{
    char arr[50];
    scanf("%s",arr);
    char *res= remove_dup(arr);
    printf("\n%s",res);
    return 0;
}