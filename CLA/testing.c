#include<stdio.h>

int main( int argc, char **argv)
{

    int i=0;
    while(argv[i]!= NULL)
    {
        printf("arg %d is %s\n",i,argv[i]);
        i++;    
    }
    return 0;
}