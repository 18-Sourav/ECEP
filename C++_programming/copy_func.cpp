#include<iostream>

using namespace std;

int main()
{
    string s1 ="Hello";

    char * s2=new char [10]{'a','b','c'};
    s1.copy(s2,2,3);
    

    puts(&s1[1]);
    cout<<s1<<endl;
    cout<<s2<<endl;


}