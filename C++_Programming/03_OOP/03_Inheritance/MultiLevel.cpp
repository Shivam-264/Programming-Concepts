#include<iostream>
using namespace std;

class Base
{
    public:
    int i,j;
    
    Base()
    {
        cout<<"Inside Base Constructor\n ";
    }

    ~Base()
    {
        cout<<"Inside Base Destructor\n ";
    }

    void fun()
    {
        cout<<"Inside Base Fun\n";
    }

    void gun()
    {
        cout<<"Inside Base gun\n";
    }
};

class Derived : public Base
{
    public:
    int x,y;

    Derived()
    {
        cout<<"inside Derived Constructor\n";
        
    }

    ~Derived()
    {
        cout<<"inside Derived Destructor\n";
        
    }

    void sun()
    {
        cout<<"Inside Derived Sun\n";
    }

};

class Derivedx : public Derived
{
    public:
    int a;

    Derivedx()
    {
        cout<<"Inside Derivedx Constructor\n";

    }

    ~Derivedx()
    {
        cout<<"Inside Derivedx Destructor\n";

    }

    void run()
    {
        cout<<"Inside Derivedx run\n";
    }

};

int main()
{
    

    Derivedx dobj;

    dobj.fun();
    dobj.gun();
    dobj.sun();
    dobj.run();

    
    

    return 0;

}