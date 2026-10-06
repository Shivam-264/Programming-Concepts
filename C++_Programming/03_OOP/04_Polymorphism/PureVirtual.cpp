#include<iostream>
using namespace std;

class Base
{
    public:
        int i;
        int j;

        int Addition(int No1, int No2)
        // The method is created  with creating body called Concrete Method
        {
            return No1 + No2;
        }

        virtual int Substraction(int No1, int No2) = 0; 
        // The method is created  without creating body called Abstract Method
};

class Derived : public Base
{
    public:
        int x;       
};


int main()
{
    //Base bobj;
    //Derived dobj;
    
    /* If a class contains at least one  virtual function in it then we cant
    create the object of that class [ But we can create pointer or reference of that class] */

    return 0;
}