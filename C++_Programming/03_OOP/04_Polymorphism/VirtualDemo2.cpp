#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;

        void fun()
        {
            cout<<"Inside Base Fun"<<"\n";
        }
};

class Derived : public Base
{
    public:
        int x;

        void fun()
        {
            cout<<"Inside Derived Fun"<<"\n";
        }
};


int main()
{

    cout<<sizeof(Base)<<"\n";
    cout<<sizeof(Derived)<<"\n";

    Base *bp = new Derived();
    bp -> fun();
    return 0;
}