#include<iostream>

using namespace std;

void swap(int &a,int &b)
{
    int temp= a;
    a=b;
    b=temp;
}
void swap(float &a,float &b)
{
    float temp = a;
    a=b;
    b=temp;
}

int main()
{
    int a,b;
    float f1,f2;

    cin>> a>> b;
    cin>> f1>> f2;

    cout<<"Before swap a = "<<a <<" b = "<<b<<endl;
    swap(a,b);
     cout<<"After swap a = "<<a <<" b = "<<b<<endl;
    cout<<"Before swap f1 = "<<f1 <<" f2 = "<<f2<<endl; 
    swap(f1,f2);
    cout<<"After swap f1 = "<<f1<<" f2 = "<<f2<<endl;
     


}
