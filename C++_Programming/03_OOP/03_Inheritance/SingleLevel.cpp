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
        cout<<"Inside Deived Sun\n";
    }

};
int main()
{
    cout<<sizeof(Base)<<"\n";
    cout<<sizeof(Derived)<<"\n";

    
    

    return 0;

}