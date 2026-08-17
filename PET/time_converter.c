#include<stdio.h>
#include<string.h>

char * time_converter(char* time_12, char*time_24)
{
    int hh,mm,ss;
    char period[3];

    sscanf(time_12,"%d:%d:%d%2s",&hh,&mm,&ss,period); //here we are extracting the hour,min,seconds,from the given string

    if(strcmp(period,"AM")==0)
    {
        if(hh==12)
            hh=0;
    }
    if(strcmp(period,"PM")==0)
    {
        if(hh!=12)
            hh+=12;
    }

    sprintf(time_24,"%d:%d:%d",hh,mm,ss); //rebuilding the string again

}
void main()
{
    char time_12[50];
    char time_24[50];

    scanf("%[^\n]",time_12);

    time_converter(time_12,time_24);
    printf("%s\n",time_24);

}