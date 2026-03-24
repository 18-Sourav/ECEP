#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void sort_names(char (*p)[20], int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
           if(strcmp(p[j],p[j+1])>0)
           {
                char temp[20];
                strcpy(temp,p[j]);
                strcpy(p[j],p[j+1]);
                strcpy(p[j+1],temp);
           }
        }
    }
}
void print(char (*p)[20],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%s\n",p[i]);
    }
}
int main()
{
    int n;
    scanf("%d",&n);

    char (*ptr)[20];
    ptr= malloc(n*sizeof(char[20]));

    for(int i=0;i<n;i++)
    {
        scanf("%s",ptr[i]);
    }
    sort_names(ptr,n);
    print(ptr,n);

    return 0;
}