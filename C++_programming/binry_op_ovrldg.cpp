#include <iostream>

using namespace std;

class marks
{
    public: 
        int math;
    // default     
    marks()
    {
        math=10;
    }  
    marks(int mark)
    {
        math= mark;
    }
    
    void print()
    {
        cout<<"X is "<<math<<endl;
    }
    //using friend function
    /*friend bool operator ==(marks m1, marks m2)
    {
        return m1.math==m2.math?true:false;
    }*/

    //Binary operator overloading as a member function
    bool operator ==( const marks m) 
    {
        return math==m.math;
    }

    marks operator +(marks other)
    {
        return marks(math + other.math);
    }
        

};

int main()
{
    marks M1;
    marks M2(5) ;
    marks M3 = M2;
   // int res1= (operator == (1,M3));
    int res = (M1==M3);
     M1 = M1+M3;
   // int res1 = M1==M3;
    cout<<res<<endl;
    cout<<M1.math<<endl;
    //cout<<res1<<endl;
}