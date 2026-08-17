#include <iostream>

using namespace std;

class Rectangle
{
    public:
        int l;
        int b;
    Rectangle()
    {
        l=b=0;
    } 
    
    Rectangle(int l1, int b2) : l(l1), b(b2) {}; // different style of writing the function

    int get_area()
    {
        return l*b;
    }

    void print_dim()
    {
        cout<<"len = "<<l <<endl;
        cout<<"Width = "<<b<<endl;
    }

    // operator overloading
    Rectangle operator ++ (int)
    {
        Rectangle temp(l,b); // saving the old object in order to return beacuse it is required in postfix
        l+=1;
        b+=1;
        return temp;
    } 
    
    Rectangle operator ++ ()
    {
        l+=1;
        b+=1;
        return *this; // address of the object which called 
        
    } 

};

int main()
{
    Rectangle R1, R2(2,3);

    R1.print_dim();
    R2.print_dim();
    R1++;
    R1.print_dim();
    Rectangle R3 = ++R2;
    R3.print_dim();
}