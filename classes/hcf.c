#include<stdio.h>

int main()
{
    int a,b;
    int hcf=1,i=1;
    scanf("%d%d",&a,&b);

   /*int min = a<b ? a : b;     // ternary operator
     while(i<=min)
     {
            if(a%i==0 && b%i==0)
                hcf=i;
            i++;
     } 
     printf("The hcf is %d",hcf);*/
     while(b!=0)
     {
        // using euclid algorithim
        // bascially just we are substracting the difference in order to get both of them equal
        int temp=a%b; 
            a=b;
            b=temp;
     }
     printf("%d",a); 
     return 0;  

}