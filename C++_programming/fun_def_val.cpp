#include<iostream>

using namespace std;

float get_price(float price,int count=1,float discount=0) // setting the default arg value
{
    return price*(1-discount)*count;
}
int main()
{
    cout<<get_price(100,3,.10)<<endl;
    cout<<get_price(100)<<endl;
    cout<<get_price(100,4)<<endl;
}