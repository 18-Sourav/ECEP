/*Enter a string : Hello World
Reverse string is : dlroW olleH
Do not print character by character.*/

#include<stdio.h>
int mystr_len(char *str)
{
    int count=0;
    while(*str)
    {
        count++;
        str++;
    }
    return count;
}
void myreverse_str(char *str)
{
    int len=mystr_len(str);
    int j=len-1;
    int temp;
    for(int i=0;i<len/2;i++)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        j--;
    }
}
int main()
{
    char str[100];

    scanf("%[^\n]",str);
    myreverse_str(str);

    printf("%s",str);
    return 0;
}