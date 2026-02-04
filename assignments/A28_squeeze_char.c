/*Read two strings s1 and s2 from user.
Remove the characters in s1 that matches with s2.
Input string:
string 1: Dennis Ritchie
string 2: Linux
Output String:
After squeeze s1: Des Rtche
Should not use extra array or the pointer*/

#include<stdio.h>

void squeeze_str(char *str1, char *str2)
{
    int i=0;
    while(str2[i]!='\0')
    {
        for(int j=0;str1[j]!='\0';j++)
        {
            if(str1[j]==str2[i])
            {
                for(int k=j;str1[k]!='\0';k++)
                       str1[k]=str1[k+1];

                j--;      
            }
                   
        }
        i++;
    }
}

int main()
{
    char str1[100],str2[100];

    scanf("%[^\n]",str1);
    getchar();
    scanf("%[^\n]",str2);

    squeeze_str(str1,str2);

    printf("\n%s",str1);

    return 0;
}