#include<stdio.h>
#include<string.h>
int x=10;


struct student
{
    char c1,c2;
    short s;
    int id;
    //char name[50];
};
void value ( struct student *s)
{
    (*s).id=12345;
    strcpy(s->name,"Sourav");
}
void  main()
{
    struct student s1;
    struct student *sptr =&s1;

    value(&s1);
    printf("Structure 1 has name = %u, ",sizeof(s1));
    //printf("id = %d, ",sptr->id);
}