#include<stdio.h>

int main()
{
    int num1=0x46,num2=0x53;

    int res1 =num1 | 1;
    int res2 =num2 | 1;

    printf("%#x\n",res1);
    printf("%#x\n",res2);

    return 0;
}