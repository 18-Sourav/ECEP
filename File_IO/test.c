#include<stdio.h>

int main()
{
    FILE *fp,*fporg;

    fporg=fopen("text.txt","r");
    fp=fopen("text.txt","a+");
    if(fporg==NULL)
    {
        printf("Error: Failure in opening the file\n");
        return 0;
    }
    printf("Info: File opened\n");
    char ch;
    //while((ch=fgetc(fp))!=EOF)
    while((ch=fgetc(fporg)))
    {
        if(feof(fporg))
        {
            printf("\nEnd of the file\n");
            break;
        }
        fputc(ch,fp);
        //printf("%c",ch);
    }
    fclose(fporg);

    return 0;

}