#include<iostream>

using namespace std;

template <typename T>
void swapp(T &a,T &b)
{
    T temp = a;
    a=b;
    b=temp;
}

int main()
{
    int a=10,b=20;
    swapp(a,b);

}