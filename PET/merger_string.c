// Q18.4 WAP to dynamically build merged string from two string

#include <stdio.h>
#include<stdlib.h>

int string_len(char *str)
{
    int count=0;
    while(*str)
    {
        count++;
        str++;
    }
    return count;
}
char * merge_string(char *str1,char*str2)
{
    int n1=string_len(str1);
    int n2=string_len(str2);

    char *res_str = malloc(sizeof(char)*(n1+n2+1));
    int i=0,j=0;
    while(str1[j])
    {
        res_str[i]=str1[j];
        i++;j++;
    }
    j=0;
    while(str2[j])
    {
        res_str[i]=str2[j];
        i++;j++;
    }
    res_str[i]='\0';

    return res_str;
}
int main()
{
    char str1[50],str2[50];

    scanf("%s",str1);
    scanf("%s",str2);

    char *res=merge_string(str1,str2);
    printf("%s",res);
    return 0;
}
