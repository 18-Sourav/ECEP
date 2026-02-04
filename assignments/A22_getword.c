#include<stdio.h>

int getword(char *str)
{
    int count=0;
    while(*str++!=' '|| *str++!='\0')
    {
        count++;
    }
    str[count]='\0';
    return count;

}
/*void printstr(char *str)
{
    while(*str !=' ')
    {
        putchar(*str);
    }
}*/
int main()
{
    char word[100];

    scanf("%[^\n]",word);
    int res= getword(word);
    printf("You have entered %s ",word);
   // printstr(word);

    printf("and the lenght is %d",res);
    return 0;
}
