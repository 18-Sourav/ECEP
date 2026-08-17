#include<iostream>

using namespace std;
class Rectangle
{
    public: 
    int len,wid;
    // default constructor
    Rectangle()
    {
        len=wid=0;
        cout<<"Default Constructor is called "<<endl;
    }
    // Parametrized constructor
    Rectangle(int l,int w)
    {
        len=l;
        wid=w;
        cout<<"Parametrized Constructor is called "<<endl;
    }
    // Copy constructor
    Rectangle(Rectangle & other)
    {
        len=other.len;
        wid=other.wid;
        cout<<"Copy Constructor is called "<<endl;
    }
    
    void print_dim()
    {
        cout<<"Length = "<<len<<endl;
        cout<<"Widht = "<<wid<<endl;
    }
    int get_peri()
    {
        return 2*(len+wid);
    }
    int get_area()
    {
        return len*wid;
    }
};

int main()
{
    Rectangle R1(5,6),R2(R1);
   cout<< R1.get_area()<<endl;
   cout<< R2.get_area()<<endl;
}

