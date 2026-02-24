#include<stdio.h>
#include<string.h>
struct student
{
    
    char name[25];
    int id;
   
    char address[30];
};
struct student s1={"Sourav",1,"Hyderabad"};

void value(struct student *s )
{
    s->id =200;
    strcpy(s->name,"Rohit");
}

void main()
{
    struct student s2;
    struct student *sptr=&s2;
    struct student str[5]={"5"};

    
    s2.id=100;
    strcpy(s2.name,"Emertxe");
    strcpy(s2.address,"Bangalore");
    value(&s1);
    
    printf("Structure 1 has name = %s, ",str[0].name);
    printf("id = %d, ",str[0].id);
    printf("address = %s\n",s1.address);

    printf("Structure 2 has name = %s, ",str[1].name);
    printf("id = %d, ",sptr->id);
    printf("address = %s\n",sptr->address);
    
    struct student s3;
    s3.id=s2.id;
    strcpy(s3.name,s1.name);
    scanf("%s",s3.address);
    printf("Structure 3 has name = %s, ",s3.name);
    printf("id = %d, ",s3.id);
    printf("address = %s\n",s3.address);  
}