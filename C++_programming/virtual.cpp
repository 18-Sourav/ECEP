#include <iostream>
using namespace std;

class B
{
    public: 
        int x;
    B()
    {
        cout<<"B constructor call"<<endl;
    }    
};

class C1 : virtual public B
{
    public:
    C1()
    {
        cout<<"C1 constructor call"<<endl;
    }           
};

class C2 : virtual public B
{
    public: 
   
    C2()
    {
        cout<<"C2 constructor call"<<endl;
    }
};

class D : public C1,C2
{
    public:
    D()
    {
        int x;
        cout<<"D constructor call"<<endl;

    }
};

int main()
{
    D obj;
}