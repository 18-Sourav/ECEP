#include<stdio.h>
#include<unistd.h>

int main()
{
    int ret = fork();

    if(ret> 0)
    {
        printf("Child created with %d pid\n",ret);

    }
    else if(ret == 0)
    {
        
    }
}