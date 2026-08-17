#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char *add_binary(char * str1, char *str2)
{
    int i=strlen(str1);
    int j=strlen(str2);

    int maxlen= i>j?i:j;
    int k=maxlen;
    i--;j--;

    char* add= malloc(maxlen+2);//one for null character and other for potential carry

    add[maxlen+1]='\0';
    int carry=0;

    while(i>=0||j>=0||carry>0)
    {
        int sum=carry;
        if(i>=0) sum+=str1[i--]-'0';
        if(j>=0) sum+=str2[j--]-'0';

        add[k--]=sum%2 +'0'; // writing back as character
        carry=sum/2;
    }

    return &add[k+1];

}

int main()
{
    char str1[50];
    char str2[50];

    scanf("%s",str1);
    scanf("%s",str2);
    char *str3 = add_binary(str1,str2);

    printf("the addtion string is %s",str3);

    return 0;
}