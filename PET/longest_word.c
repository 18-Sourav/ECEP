#include<stdio.h>
#include<string.h>

char * longest_word(char *str)
{
   
    int longest_len=0;
    char *long_start=NULL;
    const char delimeter[]= " ,./;:!()@*";

    char *token = strtok(str,delimeter);

    while(token!=NULL)
    {
        int current_len= strlen(token);

        if(current_len>longest_len)
        {
            longest_len=current_len;
            long_start=token;
        }
        
        // To move to next word
        token = strtok(NULL,delimeter);    
    }

    return long_start;
}
void main()
{
    char str[50];

    scanf("%[^\n]",str);
    char *res = longest_word(str);
    printf("The longest word is %s\n",res);

}