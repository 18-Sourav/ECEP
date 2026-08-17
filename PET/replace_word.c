//Q 18.5 WAP to replace a word in a string using DMA

#include<stdio.h>
#include<stdlib.h>
int string_len(char* str)
{
    int count=0;
    while(*str)
    {
        count++;
        str++;
    }
    return count;
}
 char *word_replace(char *str,char *rep_word, char *newword)
 {  
    int n = string_len(str);
    int n1 = string_len(rep_word);
    int n2 = string_len(newword);

    char * res_string = malloc(sizeof(char)* (n+-n1+n2+1));
    int m=0,index=-1,k=0;
    //to find the index of the word to be replaced
    while(str[m])
    {
        if(str[m]==rep_word[k])
        {
            k++;
            if(k==n1)
            {
                index=m-n1+1;
                break;
            }
        }
        else  
            k=0;
        m++;    
    }
    if(index==-1)
        return NULL;
    int i=0;
    //writing the initial
    while(i!=index)
    {
        res_string[i]=str[i];
        i++;
    }
    //writing the new word
    for(int j=0;newword[j];i++,j++)
    {
        res_string[i]=newword[j];
    }
    int l=index+n1;
    //writing the remaining letters
    while(str[l])
    {
        res_string[i]=str[l];
        i++;
        l++;
    }  
    res_string[i]='\0';

    return res_string;
 }
 int main()
 {
    char str[100];
    char word[20],newword[20];

    printf("Enter the string\n");
    scanf("%99[^\n]",str);
    getchar();
    printf("Enter the word to be replaced\n");
    scanf("%s",word);
    getchar();
    printf("Enter the new word\n");
    scanf("%[^\n]",newword);

    char *res=word_replace(str,word,newword);

    if(res)
        printf("The new string is \n%s",res);
    else
        printf("No string found\n");    
    return 0;
 }