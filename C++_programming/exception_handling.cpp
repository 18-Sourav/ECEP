#include <iostream>

using namespace std;

int validate(string name, int pin)
{
    if(name!="Sourav")
    {
        throw name;

    }
    else if(pin!= 1001)
    {
        throw pin;
    }
    return 0; // for success---- both pin and name is correct
}
int main()
{
    string uname;
    int pin;

    cout<<"Enter the username "; cin>>uname;
    cout<<"Enter the pin "; cin>>pin;

    try
    {
        if(validate(uname,pin)==0)
            cout<<"Succesfull"<<endl;
    }
    catch(string uname)
    {
        cout<<uname<<" Invalid"<<endl;
    }
    catch (int pins)
    {
        cout<<pins<<" Invalid"<<endl;
    }

}