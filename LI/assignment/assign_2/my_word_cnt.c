#include<stdio.h>
#include<unistd.h>
#include<stdbool.h>
#include <bits/getopt_core.h>

int main(int argc, int *argv[])
{
    bool show_lines = false; 
    bool show_words = false;
    bool show_letters = false;
    int option;

    while(option = getopt(argc,argv,"lwc")!= -1)  //checking options in the CLA
    {
        if(option == 'l')
            show_lines = true;
        else if(option == 'w')
            show_words = true;
        else if(option == 'c')
            show_letters = true;        
    }
    if(show_letters == show_lines && show_lines==show_words && show_words==-1)
    {
        show_lines = true; 
        show_words = true;
        show_letters = true;
    }
    if(optind == argc )
    {
        
    }

}