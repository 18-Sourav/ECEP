#include <iostream>

using namespace std;

class Polygon{

    protected: 
    int width ,height;

    public:
    void set_values(int a,int b)
    {
        width = a; height=b;
    }
};

class Rectangle : public Polygon
{
    public:
        int area()
        {
            return width *height;
        }
};

class triangle : public Polygon
{
    public: 
        int area()
        {
            return width*height/2;
        }
};

int main()
{
    Rectangle rect;
    triangle tri;

    Polygon *ppoly1 = &rect;
    Polygon *ppoly2 = &tri;

    ppoly1-> set_values(4,5);
    ppoly2-> set_values(4,5);

   // cout<< ppoly1->area()<<endl;  this is not allowed as area() is not present in polygon class
    cout<<tri.area()<<endl;
}
