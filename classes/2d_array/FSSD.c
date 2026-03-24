#include<stdio.h>
#include<stdlib.h>

void print(int row,int col,int*p[row])
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
            printf("%d",p[i][j]);
        printf("\n");
    }
}

int main()
{
    int row,col;
    scanf("%d",&row);
    int *p[row];

    for(int i=0;i<row;i++)
    {
        p[i]=malloc(col*sizeof(int));
    }
    

    print(row,col,p);

}