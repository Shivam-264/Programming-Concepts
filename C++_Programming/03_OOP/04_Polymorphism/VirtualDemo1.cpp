#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;
};

class Derived : public Base
{
    public:
        int x;

};

int main()
{

    Base *bp1 = new Base();  //No casting 
    Base *bp2 = new Derived();  // Up Casting

    // Derived *dp1 = new Base(); // Down Casting
    Derived *dp2 = new Derived(); // No Casting
    return 0;
}