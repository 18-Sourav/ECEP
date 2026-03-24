#include<stdio.h>

void print(int row,int col,int (*p)[col])
{
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++)
            printf("%d ",p[i][j]);
        printf("\n");
    }    

}

int main()
{
    int row,col;

    scanf("%d %d",&row,&col);

    int arr[row][col];

    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
            scanf("%d",&arr[i][j]);

    print(row,col,arr);
    
    return 0;
}