#include<iostream>

using namespace std;

class Base
{
    public : 
        int i;
        float f;
        void printf()
        {
            cout<< i <<endl;
            cout<< f <<endl;

        }
};
class child : public Base{
    public:
        string name;

        void print()
        {
            cout<<i<<endl;
            cout<<f<<endl;
            cout<<name<<endl;
        }
};

int main()
{
    child C1;
}