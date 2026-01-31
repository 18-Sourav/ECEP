#include<stdio.h>

int main()
{
    char str[5],str2[10];

    fgets(str,sizeof(str),stdin);
    scanf("%[^\n]",str2);
    printf("%s",str);
    printf("%s",str2);
    return 0;

}