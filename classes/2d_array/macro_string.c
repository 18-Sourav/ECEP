#include<stdio.h>

#define MACRO(str)    #str
#define MAC(X,Y)     X##Y

int main()
{
   printf("%s\n", MACRO(WORLD));
   printf("%s\n",MAC(10, MORNING));
    return 0;
     
}