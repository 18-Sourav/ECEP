#include<stdio.h>
void remove_space(char *s )
{
    int i=1;
    while(s[i]!='\0')
    {
        if(s[i-1]=='_'&& s[i]=='_')
        {
            for(int j=i;s[j]!='\0';j++)
                s[j]=s[j+1];
        }
        else
            i++; 
    }
}
int main()
{
    char str[100];
    scanf("%[^\n]",str);

    remove_space(str);
    printf("String after removing space is %s",str);

    return 0;
}