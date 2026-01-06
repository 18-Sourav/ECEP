#include<stdio.h>

int main()
{
    int n,flag=1;

    scanf("%d",&n);
    int i=n+1;
  
    while(i>1)
    {
         for(int j=2;j<=i/2;j++)
        {
             if((i%j)==0)
            {
                flag=0;
                 break;
             }  
             else 
                flag=1; 
        }
         if(flag==1)
            break;
        i++;
    }
    //printf("%d\n",flag);
    printf("The next prime number is %d",i);
    return 0;
}
   