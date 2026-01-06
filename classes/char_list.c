#include<stdio.h>

int main()
{
    char ch='a';
    char alp;
    printf("Enter any small alphabet\n");
    scanf("%c",&alp);
    while(ch<=alp)
    {
        printf("%c\n",ch);
        ch++;
    }
    return 0;
}