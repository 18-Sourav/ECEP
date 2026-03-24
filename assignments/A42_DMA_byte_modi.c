#include<stdio.h>
#include<stdlib.h>

char ch_flag1;
char ch_flag2;
short sh_flag;
int int_flag;
float ft_flag;
double db_flag;


void addInt(int* ptr)
{
    if(int_flag!=1 && db_flag!=1 && ft_flag!=1)
    {
        int value;
        scanf("%d",(ptr+1));
    }
    else
        printf("Integer memory is already occupied\n");  
}
void addChar(char* ptr)
{
    if((ch_flag1!=1 | ch_flag2!=1) && db_flag!=1)
    {
        char value;
        if(ch_flag1==1)
            scanf("%c",ptr);
        else
            scanf("%c",ptr+1);
    }
    else
        printf("Character memory is already occupied\n");
}
void addShort(short* ptr)
{
    if(sh_flag!=1 && db_flag!=1 )
    {
        short value;
        scanf("%hd",(ptr+1));
    }
    else
        printf("Short memory is already occupied\n"); 

}
void addFloat(float* ptr)
{
    if(int_flag!=1 && db_flag!=1 && ft_flag!=1)
    {
        float value;
        scanf("%f",(ptr+1));
    }
    else
        printf("Float memory is already occupied\n");  
}

void addDouble(double* ptr)
{
    if(int_flag!=1 && db_flag!=1 && ft_flag!=1 && ch_flag1!=1 && ch_flag2!=1)
    {
        double value;
        scanf("%lf",ptr);
    }
    else
        printf("Double memory is already occupied\n"); 
}

void addelement(void *ptr)
{
    int type;
    do
    {
        printf("Enter the type of data to be stored\n");
        printf("1. Character\n2. Short\n3. Integer\n4. Float\n5. Double\n");
        scanf("%d",&type);

        printf("Enter the element to be stored\n");
        switch(type)
        {
            case 1: addChar((char*)ptr);
                    break;
            case 2: addShort((short*)ptr);        
                    break;
            case 3: addInt((int*)ptr);
                    break;
            case 4: addFloat((float*)ptr);
                    break;
            case 5: addDouble((double*)ptr);
        }
    }while(type>0 && type<6);
}
void displayelement(void * ptr)
{
    if(ch_flag1==1)
        printf("1.%c\n",(char*)ptr);
    if(ch_flag2==1)
        printf("2.%c\n",(char*)ptr+1);
    if(sh_flag==1)
        printf("3.%hd\n",(short*)ptr);
    if(int_flag==1)
        printf("4.%d\n",(int*)ptr+1);
    if(ft_flag==1)
        printf("5.%f\n",(float*)ptr+1);
    if(db_flag==1)
        printf("6.%lf\n",(double*)ptr);
}
void removeelement(void *ptr,int n)
{
    if(n==1)
        ch_flag1=0;
    else if(n==2)
        ch_flag2=0;
    else if(n==3)
        sh_flag=0;
    else if(n==4)
        int_flag=0;
    else if(n==5)
        ft_flag=0;
    else 
        db_flag=0;
}

int main()
{
    void* ptr=malloc(8);
    int choice,index;

    do
    {
        printf("Menu\n");
        printf("1. Add elements\n2. Display Elements\n3. Remove Elements\n4. Exit the program\n");
        scanf("%d",&choice);
    }while(choice!=4);

    switch(choice)
    {
        case 1: addelement(ptr);
                break;
        case 2: displayelement(ptr);
                break;
        case 3: removeelement(ptr,index);
                break;
        case 4: exit(0);          
    }
}