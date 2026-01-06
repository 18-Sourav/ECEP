#include<stdio.h>
#include <stdint.h>
int main()
{
    int n,sum=0,num=10;
    //unsigned char a = 255;
    //signed char   b = -1;


    //scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        sum+=i;
    }
   // unsigned int a = 65535;
    //signed short   b = -1;
    int8_t  a = -1;
    uint8_t b = 255;

    
     int c =a+b;

     int num1=(num,num--,++num);


   // printf("%d\n",sum);
    printf("%u\n", a);
    printf("%u\n", b);
    printf("%u\n", c);
    return 0;
}