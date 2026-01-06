#include<stdio.h>

int main()
{
    int a,b;

    scanf("%d%d",&a,&b);

    int x= a/b;

    /*switch(x)
    {
        case 0: printf("The larger Nos is %d",b);
                break;
        default: printf("The larger nos is %d",a);
    }
        */
    unsigned int res= a>0 ? a:-a;
    int num=a>0?printf("%d",a):(a==0)?0:printf(" neg %d",a);
    //printf("%d",res);    
    return 0;
}