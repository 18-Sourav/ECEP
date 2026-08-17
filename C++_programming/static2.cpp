#include <iostream>
// note : regarding static member function
// static function is also class specific, and it only access static member
using namespace std;
class MY
{
    public:
    static int x;
    static int y;
    int *ptr;
    static void print()
    {
	cout << x << endl;
	cout << y << endl;
    }
};
int MY::x = 1;
int MY::y = 2;
int main()
{
    MY obj;
    obj.x = 1;
    obj.print(); // via object call
    MY::print(); // direct call

    return 0;
}
