#include <iostream>

using namespace std;

class Banking
{
    public:
        string name;
        string ac_no;
        string mob;
        int age;
        int amount;

        void print_info()
        {
            cout<<"Name is: "<< name<< endl;
            cout<<"Acc No is: "<< ac_no<< endl;
            cout<<"Mob is: "<< mob<< endl;
            cout<<"Age is: "<< age<< endl;
        }
        int get_balance()
        {
            return amount;
        }
        void withdraw(int cash)
        {
            amount = amount-cash;
        }
        void deposit(int cash)
        {
            amount=amount+cash;
        }
        void transfer(Banking &other,int money)
        {
            amount-=money;

            other.amount+=money;

        }
};

int main()
{
    Banking P1 ={ "Sourav","1234","54321234",25,10000},P2={"Rohit","09878765","12345",23,20000};

    P1.print_info();
    P2.print_info();
    cout<<P1.get_balance()<<endl;
   // P1.withdraw(2000);
    cout<<"Balance after withdrawal "<<P1.get_balance() <<endl;
   // P1.deposit(55000);
    cout<<"Balance after deposit "<<P1.get_balance()<<endl;

    cout<<"Balance before tranfer for P1 "<<P1.get_balance()<<endl;
    cout<<"Balance before tranfer for P2 "<<P2.get_balance()<<endl;
    P1.transfer(P2,2000);
    cout<<"Balance after tranfer for P1 "<<P1.get_balance()<<endl;
     cout<<"Balance after tranfer for P2 "<<P2.get_balance()<<endl;
    


}
