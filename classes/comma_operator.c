#include<stdio.h>

int main()
{
    int a,b;

    a=((3,5),(2,2));
    while((a=2,--a))
    {
        printf("%d\n",a);
        a++;
        printf("%d\n",a);

      if (a==2)
         break;
    }

    printf("%d\n",a);
    return 0;
}