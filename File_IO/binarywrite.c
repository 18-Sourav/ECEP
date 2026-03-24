#include<stdio.h>

struct student
{
    char name[20];
    int marks[3];
};

int main()
{
    int size;
    float pavg=0,cavg=0,mavg=0;
    printf("Enter the no of students\n");
    scanf("%d",&size);
    struct student s[size];
    
    for(int i=0;i<size;i++)
    {
        printf("Enter the name of the student ");
        scanf("%s",s[i].name);
        printf("Enter the marks of physics Chemistry and Maths\n");
        for(int j=0;j<3;j++)
        {
            scanf("%d",&s[i].marks[j]);
        }
        pavg=pavg+s[i].marks[0];
        cavg=cavg+s[i].marks[1];
        mavg=mavg+s[i].marks[2];
        
    }
    pavg/=size;
    cavg/=size;
    mavg/=size;
    
    
    // writing to binary file
    FILE *fp = fopen("binary.out","wb");
    
    if(fp==NULL)
    {
        printf("Error in reading");
        return 0;
    }
    
    fwrite(&size,sizeof(int),1,fp);
    fwrite(s,sizeof(struct student),size,fp);
    fwrite(&pavg,sizeof(float),1,fp);
    fwrite(&cavg,sizeof(float),1,fp);
    fwrite(&mavg,sizeof(float),1,fp);
    
    fclose(fp);
    printf("Stored succesfully in binary file\n");
    
    return 0;
}