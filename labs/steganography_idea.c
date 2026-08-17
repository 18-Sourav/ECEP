#include<stdio.h>

int main()
{
    unsigned char arr[8]={0x28,0x11,0x23,0x27,0x22,0xAB,0x1B,0x57};
    printf("The original arr values are : ");
    for(int i=0;i<8;i++)
        printf("%X ",arr[i]);

    unsigned char ch;
    printf("\nEnter any character ");
    scanf("%c",&ch);

    for(int i=0;i<8;i++)
    {
        arr[i]=arr[i] & ~1; // clears the last bit of (i+1)th element in the array
        unsigned char info = ch & (1<<(7-i)); // gets the info bit starting from MSB
        arr[i]= arr[i]|(info>>(7-i)); // merging the MSB of info with LSB of arr[i]
    }
    printf("\nThe new arr values are : ");
    for(int i=0;i<8;i++)
        printf("%X ",arr[i]);

    printf("\n");
    
    return 0;

}