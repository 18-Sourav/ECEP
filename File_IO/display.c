#include<stdio.h>

struct student
{
    char name[20];
    int marks[3];
};

int main()
{
    FILE *fptr;
    fptr= fopen("binary.out","rb");
    
    if(fptr==NULL)
    {
        printf("Error: File doesnt exist\n");
        return 0;
    }
    
    int size;
    
    if(fread(&size,4,1,fptr)==0)
    {
        printf("Error: failed to read number of students\n");
        return 0;
    }
    
    struct student s[size];
    
    
    if(fread(s,sizeof(struct student),size,fptr)==0) // reading the entire structure in one shot and splitting according to the size
    {
        printf("Error in reading the structure\n");
        return 0;
    }
    
    float avg[3];
    
    if(fread(avg,sizeof(float),3,fptr)==0)// reading the avg marks and storing in the array
    {
        printf("Error in reading the avg marks\n");
        return 0;
    }
    char *strline ="....................................................";
    printf("%s\n" "%-20s" "%10s" "%10s" "%12s\n" "%s\n", strline, "Name", "Maths", "Physics", "Chemistry",strline);
    
    for(int i=0;i<size;i++)
    {
        printf("%-25s %-8d %-10d %-10d \n",s[i].name,s[i].marks[0],s[i].marks[1],s[i].marks[2]);
    }
    printf("%s\n" "%-25s" "%-10s" "%-12s" "%-10s\n" "%s\n", strline, "Average", "MathsAvg", "PhysicsAvg", "ChemistryAvg",strline);
    //printf("Average ");
    printf("%32g %7g %13g \n",avg[0],avg[1],avg[2]);
    
    return 0;
    
}