#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char (*str)[10]=malloc(sizeof(*str)*3);

    strcpy((str)[0],"Array");
    strcpy((str)[1],"Of");
    strcpy((str)[2],"Strings");

    int len=sizeof(*str);

    printf("Size of str is %d\n",len);

    printf("%s %s %s \n", (str)[0],(str)[1],(str)[2]);
    //printf("%p\n %p\n %p\n",);
    return 0;
}