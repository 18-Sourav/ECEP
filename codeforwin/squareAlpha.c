/*  A b C d E 
    f G h I j 
    K l M n O 
    p Q r S t 
    U v W x Y 
*/
#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    char alpha = 'A',ch='b';
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            printf("%c ",alpha);
            alpha++;

            if(alpha>='A'&& alpha<='Z')
                alpha+=32;
            else if(alpha>='a'&& alpha<='z')
                alpha-=32;
        }
        printf("\n");
    }
    return 0;
}