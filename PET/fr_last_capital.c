//WAP to convert first and last letter of each word to uppercase

#include<stdio.h>
#include<ctype.h>

char * upper_case(char *str)
{
    int i=0;

    while(str[i])
    {
       if(str[i]!=' ' && (i==0 || str[i-1]==' '))
            str[i]=toupper(str[i]);
       
        if(str[i]!=' ' && (str[i+1]==' ' || str[i+1]=='\0'))
            str[i]=toupper(str[i]);
        i++;    
    }
    return str;
}

int main()
{
    char str[50];

    scanf("%[^\n]",str);

    char *res=upper_case(str);

    printf("%s\n",res);
    return 0;
}