#include<stdio.h>

int pangram(char *str)
{
    int arr[26]={0},i;

    while(*str)
    {
        if(*str>='A'&&*str<='Z')
        {
            i=*str-'A';
            arr[i]++;
        }
        else if(*str>='a'&&*str<='z')
        {
            i=*str-'a';
            arr[i]++;
        }
        str++;
    }
    for(int i=0;i<26;i++)
        if(!arr[i])
            return 0;
        
    return 1;
}
int main()
{
    char str[100];

    scanf("%[^\n]",str);

    int res= pangram(str);

    if(res)
        printf("The Entered String is a Pangram");
    else
        printf("The Entered String is not a Pangram");

    return 0;

}