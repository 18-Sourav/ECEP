#include<stdio.h>
#include<stdlib.h>

void matrix_mul(int **a, int r1,int c1, int **b, int r2, int c2, int**c)
{
   // printf("start\n");
     for(int i=0;i<r1;i++)
     {
       // printf("lope-%d\n",i);
        for(int j=0;j<c2;j++)
        {
           // printf("lope-%d\n",j);
            int sum=0;
            for(int k=0;k<c1;k++)
            {
               // printf("lope k-%d\n",k);
                sum+= a[i][k]*b[k][j];
            }
            c[i][j]=sum;
          //  printf("%d ",c[i][j]);
        }
     }
}

void mat_memory(int ***a, int rows, int cols)
{
    *a=malloc(rows*sizeof(int*));

    for(int i=0;i<rows;i++)
        (*a)[i]=malloc(cols*sizeof(int));
}
void mat_values(int **a, int rows, int cols)
{
    for(int i=0;i<rows; i++)
        for(int j=0;j<cols;j++)
            scanf("%d",&a[i][j]);
}

void mat_dis(int **res, int rows, int cols)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }        
}

int main()
{
    int r1,r2,c1,c2,r3,c3;
    int ** mat_a, **mat_b, **mat_c;

    printf("Enter the rows and columns of the first matrix\n");
    scanf("%d%d",&r1,&c1);

    mat_memory(&mat_a,r1,c1);
    printf("Enter the values of first matrix\n");
    mat_values(mat_a,r1,c1);
    mat_dis(mat_a,r1,c1);


    printf("Enter the rows and columns of the second matrix\n");
    scanf("%d%d",&r2,&c2);

    mat_memory(&mat_b,r2,c2);
    printf("Enter the values of second matrix\n");
    mat_values(mat_b,r2,c2);
    mat_dis(mat_b,r2,c2);

    if(c1!=r1)
    {
        printf("Incorrect matrix size\n");
        return 0;
    }

    r3=r1;
    c3=c2;
    mat_memory(&mat_c,r3,c3);
    //printf("Matrix multi\n");
    matrix_mul(mat_a,r1,c1,mat_b,r2,c2,mat_c);

    mat_dis(mat_c,r3,c3);

    return 0;
}