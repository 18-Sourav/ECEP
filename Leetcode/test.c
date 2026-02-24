
#include <stdio.h>
int foo(int a)
{
    int x = 0;

    x ? sizeof a : sizeof int;

    return x;
}


int main()
{
   
    int a=10;
    printf("%d",foo(a)); 
    return 0;
}
