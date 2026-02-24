#include<stdio.h>
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
void reverse(char* str, int start,int end)
{
    int len=end-start+1;
    int i=start,temp;
    while(i<(len/2+start))// as start keeps changing we are moving the index by adding start.
    {
        temp=str[i];
        str[i]=str[end];
        str[end]=temp;
        end--;
        i++;
    }
}
void string_rev(char *str)
{
    int start=0,i=0;
    int end= string_len(str)-1; // string length
    reverse(str,start,end); // initially reversing the the entire string 
    while(str[i])
    {
        if(str[i]== ' ')
        {
            end=i-1;
            reverse(str,start,end); // now reversinng each word individually
            start=i+1;  
        }
        i++;
    }
    end=i-1;
    reverse(str,start,end);// now doing the last word
}
int main()
{
    char str[100];
    scanf("%[^\n]",str);
    string_rev(str);
    printf("%s",str);
    return 0;

}
