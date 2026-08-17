#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/stat.h>

typedef enum{
    SUCCESS = 0,
    FAILURE = 1
}status;


status my_copy(int src_fd, int dest_fd)
{
    char ch;
    while(read(src_fd,&ch,1)>0)
    {
        if(write(dest_fd,&ch,1)==-1)
            return FAILURE;
    }
    return SUCCESS;
}

int main(int argc,char* argv[])
{
    if(argc<3 || argc>4)
    {
        perror("Invalid number nos. input\nEnter 3 or 4 input\n");
        exit(0);
    }

    int src_fd = open(argv[argc-2],O_RDONLY);  
    
    if(src_fd == -1)
    {
        perror("Source File is not present\n");
        close(src_fd);
        exit(0);
    }
    int dest_fd = open(argv[argc-1],O_WRONLY);

    if(dest_fd == -1)
    {
        dest_fd = open(argv[argc-1],O_WRONLY|O_CREAT|O_EXCL,0644);  //creating a file with default permission
        if(my_copy(src_fd,dest_fd))
            perror("Copying of data failed\n");
         
        else
            printf("Copying of data successfully\n");
     
        if(argv[1]=="-p")
        {
            struct stat status;
            fstat(src_fd,&status);
            fchmod(dest_fd,status.st_mode);
        }
    }
    
    else
    {
        char ch;
        printf("Do you want to overwrite the existing file\n");
        printf("Enter Y/N\n");
        scanf("%c",&ch);
    
        if(ch=='Y'|| ch=='y')      //overwrinting the content
        {
            dest_fd = open(argv[argc-1],O_WRONLY|O_CREAT|O_TRUNC);   
            if(my_copy(src_fd,dest_fd))
                perror("Copying of data failed\n");
            else
                perror("Copying of data successfully\n");
             
            if(argv[1]=="-p")
            {
                struct stat status;
                fstat(src_fd,&status);
                fchmod(dest_fd,status.st_mode);
            }
        }
    }
    close(dest_fd);
    close(src_fd);
    exit(0);

}