#include<stdio.h>
#include<stdlib.h>

void magic_square(int num,int **arr)
{
    int row=0,col=num/2;
    int count=1;
    int p_row=row,p_col=col;
    while(count<=num*num)
    {
        if(count==1)
        {
            arr[row][col]=count++;
            p_row=row;
            p_col=col;
            row--;
            col++;
        }
        if(row<0)
            row=num-1;
        if(col>num-1)
            col=0;
        if(arr[row][col]!=0)
        {
            row=p_row+1;
            if(row>num-1)
                row=0;
            col=p_col;
            arr[row][col]=count++;
            p_col=col;
            p_row=row;
            row--;
            col++;
        }
        else
        {
            arr[row][col]=count++;
            p_col=col;
            p_row=row;
            row--;
            col++;

        }    
    }
}
void print_square(int num, int **arr)
{
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num;j++)
            printf("%d ",arr[i][j]);

        printf("\n");
    }
}

int main()
{
    int num;
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("Please enter a odd number\n");
        return 0;
    }
    int **arr;

    arr=calloc(num*num,num*sizeof(int*));
    for(int i=0;i<num;i++)
        arr[i]=calloc(num*num,num*sizeof(int));
    magic_square(num,arr);
    print_square(num,arr);

    return 0;
}