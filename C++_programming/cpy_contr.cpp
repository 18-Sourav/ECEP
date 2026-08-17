#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

class Temp
{
    public :
        int age;
        char *name;
        void print()
        {
            cout<<"Name"<<name<<endl;
            cout<<"age"<<age<<endl;
        }

        Temp(const char *Name, int Age) // parametrized constructor
        {
            cout<<"Parametrized constructor called"<<endl;
            name = (char*)malloc(strlen(Name)+1);
            strcpy(name,Name);
            age=Age;
        }
        Temp(Temp & other)   // our copy constructor
        {
            cout<< " Copy constructor called"<<endl;
            age=other.age;
            name=(char*)malloc(strlen(other.name)+1);
            strcpy(name,other.name);
        }

};

int main()
{
    Temp P1("Rohit",25);
    P1.print();
    Temp P2=P1;
    P2.print();

    strcpy(P1.name=(char*)realloc(P1.name,strlen("new_name"+1)),"New_name");
    P1.print();
    P2.print();
}