#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int max = a>b?a:b;

    int i=1,lcm=max;
    while(1)
    {
        if(max%a==0 && max%b==0)
            break;
        max=max+lcm;
    }
    printf("lcm is %d",max);
    return 0;
}