#include<stdio.h>
#include<stdlib.h>

struct student
{
    char name[20];
    int roll;
    int *marks; 
};

int main()
{
    int nos,sub;

    printf("Enter number of students\n");
    scanf("%d",&nos);

    printf("Enter number of subjects\n");
    scanf("%d",&sub);

    struct student s[nos]; // array of student structure
    char subjects[sub][50]; // marks name 
    int marks[nos][sub]; // marks of each subject of each student

    for(int i=0;i<sub;i++)
    {
        printf("Enter the name of subject%d",i+1);
        scanf("%s",subjects[i]);
    }
    for(int i=0;i<nos;i++)
    {
        printf(".............Enter student details...........\n");
        printf("Enter the student Roll number : ");
        scanf("%d",&s[i]->roll);
        printf("Enter the student %d name : ",i+1);
        scanf("%s",s[i]->name);
        for(int i=0;i<nos;i++)
        {
            for(int j=0;j<sub;j++)
            {
                printf("Enter %s mark : ",subjects[i]);
                scanf("%d",&marks[i][j]);
                s[i]->marks=marks[i];
            }
        }

    }
    int choice; // no of student data choice
    int choice_dis; // search using rollnos or name

    do
    {
        char ch;
        printf("........Display Menu.......\n");
        printf("1. All student details\n2. Particular student\n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: display();
                    break;
            case 2: printf(".......Menu for particular student......\n");
                    printf("1.Name.\n2. Roll No.\n");
                    printf("Enter the choice\n");
                    scanf("%d",&choice_dis);
                    if(choice_dis==1)
                    {
                        char name[20];
                        printf("Enter the name of thee student : ");
                        scanf("%s",name);
                        student_display(s,name);
                    }
                    else
                    {
                        int roll;
                        printf("Enter the roll number of the student : ");
                        scanf("%d",&roll);
                        student_display(s,roll);
                    } 
                    break;
                           
        }
        printf("Do you want to continue to display(y/n): ");
        scanf("%c",&ch);

    }while(ch!='n');
}