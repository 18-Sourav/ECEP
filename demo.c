#include <stdio.h>

void swap(void *num1,void *num2, char *type)
{
    type temp = *((type *)num1);
    printf("%d",temp);
}

int main()
{
    
    int num1=10,num2=20;
    swap(&num1,num2,"int");
    
    printf("Hello World");

    return 0;
}
