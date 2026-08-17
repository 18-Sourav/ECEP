#include<stdio.h>
int mystring_len(char *str)
{
    int count=0;
    while(*str)
    {
        *str++;
        count++;
    }
    return count;
}
char *clean_spaces(char *str)
{
    int i=0,j=0;
    int n=mystring_len(str);
    while(i<n)
    {
        while(str[i]==' ')
            i++;
        while(i<n && str[i]!=' ')
            str[j++]=str[i++];
        while(str[i]==' ')
            i++;
        if(i<n)
            str[j++]=' ';            
    }
    str[j]='\0';
    return str;
}
char *reverse(char *str, int start, int end)
{
    while(start<end)
    {
        char temp=str[start];
        str[start++]=str[end];
        str[end--]=temp;
    }
    return str;
}
char* string_reverse(char*str)
{
    clean_spaces(str);
    int start=0;
    int end= mystring_len(str)-1;
    //initially reversing the complete string
    reverse(str,start,end);
    int i=0;
    while(str[i])
    {
        if(str[i]==' ')
        {
            end=i-1;
            reverse(str,start,end);
            start=i+1;
        }
        i++;
    }
    end=i-1;
    reverse(str,start,end);
    return str;
}

int main()
{
    char str[100];

    printf("Enter the string\n");
    scanf("%99[^\n]",str);

    char *res= string_reverse(str);

    printf("The reverse string is \n%s\n",res);
    return 0;

}