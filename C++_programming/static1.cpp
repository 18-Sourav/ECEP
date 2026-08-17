#include <iostream>
// Note : static member in class is class specific but not object specific
// you can access it directly also, with object also
using namespace std;
class MY
{
    public:
    int x;
    static int y;
    int *ptr;
};
int MY::y = 2;
int main()
{
    MY obj;
    obj.x = 1;
    cout << MY::y << endl;
    cout << obj.y << endl; // by object access
    MY::y = 22; // direct access
    cout << obj.y << endl;

    return 0;
}
