#include<stdio.h>
#include<string.h>
int x=10;


struct student
{
    int id;
    char name[50];
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
    printf("Structure 1 has name = %s, ",s1.name);
    printf("id = %d, ",sptr->id);
}