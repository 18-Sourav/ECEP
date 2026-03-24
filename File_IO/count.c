#include<stdio.h>

int main()
{
    FILE *fp;

    fp=fopen("count.txt","r");

    if(fp==NULL)
    {
        printf("Error: in opening file");
        return 1;
    }
    char ch;
    int count=0;
    //printf("Position of c is ");
    while((ch= fgetc(fp))!=EOF)
    {
       
        if(ch=='c')
        {
            long position = ftell(fp);
            printf("%ld ",position);
            count++;
        }
    }
    
    fclose(fp);

    return 0;

}