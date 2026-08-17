#include<iostream>

using namespace std;

class Base
{
    public :

        int *ptr;

        Base()
        {
            ptr = new int;
            cout<<"Base class const\n";
        }

        virtual ~Base()
        {
            delete ptr;
            cout<<"Base class distr\n";
        }
};

class child : public Base
{
    public:
        char *str;

        child()
        {
            str = new char[10];
            cout<<"Child class const\n";
        }
        ~child()
        {
            delete [] str;
            cout<<"Child class distr\n";
        }
};

int main()
{
    Base *b_ptr = new child;
    delete b_ptr; 
}