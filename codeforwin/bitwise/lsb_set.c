/*C program to check Least Significant Bit (LSB) of a number is set or not*/

#include<stdio.h>

int check_lsb(int n)
{
    int mask=1;
    if(mask&n)
        return 1;
    else
        return 0;
}
int check_msb(int num)
{
    int mask= 1<<31;
    if(mask&num)
        return 1;
    else
        return 0;
}
int main()
{
    int num;
    scanf("%d",&num);

    if(check_lsb(num))
        printf("The lsb is set\n");
    else
        printf("The lsb is not set\n");

    if(check_msb(num))
        printf("The msb is set\n");
    else
        printf("The msb is not set\n");    
        
     return 0;
}