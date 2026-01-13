#include<stdio.h>
//#include<ctype.h>


int isalnum1(char ch)
{
    if((ch>='a'&&ch <='z')|| (ch>='A'&& ch<='Z')||(ch>='0'&& ch<='9'))
        return 1;
    else
        return 0;    
}

int main()
{
    char ch;

    scanf("%c",&ch);

    if(isalnum1(ch))
        printf("It is an alpha-numeric character\n");
    else
        printf("It is not an aplha-numeric character\n");
    return 0;        
}