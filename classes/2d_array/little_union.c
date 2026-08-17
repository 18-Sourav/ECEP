#include<stdio.h>

union Endian
{
    unsigned int value;
    unsigned char byte[4];
};
int main()
{
    union Endian e ;
    e.value= 0x12345678;

    e.byte[0]==0x78? printf("Little\n"):printf("Big\n");
    return 0;
}
