/*Inputs: -

Positive integers say 'A', 'R' and 'N', where N > 1
where:
A = First number
R = Common difference(AP & HP), Common ratio(GP)
N = number of terms
*/

#include<stdio.h>

int main()
{
    int A,R,N,ap,gp;
    float hp;

    printf("Enter the first number ");
    scanf("%d",&A);
    printf("Enter the common difference/common ratio ");
    scanf("%d",&R);
    printf("Number of terms ");
    scanf("%d",&N);

    int x=0;
    printf("AP= ");
    while(x<N)
    {
        //for AP series
            ap=A+x*R;
            printf("%d ",ap);
            x++;    
    }
    printf("\n");
    printf("GP= ");
    gp=A;
    for(int i=1;i<=N;i++)
    {
        //GP series
        printf("%d ",gp);
        gp=gp*R; 

    }
    hp=A;
    printf("\n");
    printf("HP= ");
    for(int i=0;i<N;i++)
    {
        ap=A+i*R;
        hp=(float)1/ap;
        printf("%f ",hp);
    }
    return 0;

}