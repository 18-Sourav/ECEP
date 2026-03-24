#include<stdio.h>
#include<stdlib.h>

int fragments(int row, float *p[row], int *size)
{
    for(int i=0;i<row;i++)
    {
        float sum=0;
        for(int j=0;j<size[i];j++)
            sum+=p[i][j];
        
        p[i][size[i]]=(sum/size[i]);
    }

}

void sort(int row,float *p[row], int *size)
{
    float *temp;// for swapping
    for(int i=0;i<row-1;i++)
    {
        int colsize;
        for(int j=0;j<row-i-1;j++)
        {
            if(p[j][size[j]]>p[j+1][size[j+1]])
            {
                temp=p[j];
                p[j]=p[j+1];
                p[j+1]=temp;

                colsize=size[j];
                size[j]=size[j+1];
                size[j+1]=colsize;
            }
        }
    }

}

void print(int row, float *p[row], int *size)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<=size[i];j++)
            printf("%f ",p[i][j]);
        
        printf("\n");
    }

}
int main()
{
    int row,cols;
    scanf("%d",&row);
    if(row<1)
    {
        printf("Invalid rows size\n");
        return 0;
    }

    float *ptr[row]; // arrays of pointer
    int col[row]; // To store the cols size;

    for(int i=0;i<row;i++)
    {   printf("Enter the column size of %d row ",i+1);
        scanf("%d",&col[i]);
        ptr[i]=malloc(col[i]*sizeof(float)+1);
    }    

    // Reading the array elements of each row

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col[i];j++)
        {
            scanf("%f",&ptr[i][j]);
        }
    }

    fragments(row,ptr,col);
    print(row,ptr,col);
    printf("\n");
    sort(row,ptr,col);
    print(row,ptr,col);

    return 0;
}