// collect input from CLA then validate
// take a backup of stdout
// close the stdout

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        perror("Please enter the file name in CLA\n");
        return -1;
    }

    int fd = open(argv[1], O_WRONLY|O_CREAT|O_TRUNC,0764);

    printf("Please select the operation.\nPress 1.dup\n 2.dup2\n ");
    int option;
    scanf("%d", &option);

    if (option == 1) //dup operation
    {
        int backup = dup(STDOUT_FILENO);   //taking the backup of stdout
        close(1);                          //closing the stdout to free the 1 postion in the table
        int newfd = dup(fd);               //Now fd = 1
        printf("The message is print into file using dup\n");

        close(newfd);
        dup(backup);
        printf("The message is print into STDOUT using dup\n");
        close(fd);

    }
    else if (option == 2)  //dup2 operation
    {
        dup2(STDOUT_FILENO,4);              //giving stdout 4th positon in fd table
        dup2(fd,STDOUT_FILENO);
        printf("The message is print into file using dup2\n");
        fflush(stdout);

        dup2(4,STDOUT_FILENO);
        printf("The message is print into STDOUT using dup2\n");
    }
    else
    {
        perror("Please select the correct option\n");
    }
}