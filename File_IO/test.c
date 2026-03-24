#include<stdio.h>

int main()
{
    FILE *fp,*fporg;

    fporg=fopen("text.txt","r");
    fp=fopen("text_copy.txt","w");
    if(fporg==NULL)
    {
        printf("Error: Failure in opening the file\n");
        return 0;
    }
   // printf("Info: File opened\n");
    char ch;
   
    while((ch=fgetc(fporg)))
    {
        if(feof(fporg))
        {
            printf("\nEnd of the file\n");
            break;
        }
        fputc(ch,fp);
       
    }
   
    fclose(fporg);
    fclose(fp);

    return 0;

}