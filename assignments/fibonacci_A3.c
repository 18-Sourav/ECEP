#include<stdio.h>
int main()
{
    int n,fib1=0,fib2=1,fib=0; //first = fib1, second = fib2, next = fib
    scanf("%d",&n);            // taking the limit value
    if(n>=0)                   // checking the positive condition
    {
         while(fib<=n)        // checking the overflow condition upto the limit
        {
            printf("%d ",fib);  //printing the next value
            fib=fib1+fib2;      //updating the next value
            fib2=fib1;          //changing the first value
            fib1=fib;           // changing the second value
         }
    }
    else
        printf("Invalid Input");  // if negative input then invalid input
    return 0;

}