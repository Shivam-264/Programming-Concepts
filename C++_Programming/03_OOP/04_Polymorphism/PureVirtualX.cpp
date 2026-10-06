#include<iostream>
using namespace std;

#pragma pack(1)
class Base
{
    public:
        int i;
        int j;

        int Addition(int No1, int No2)  // 1000
        // The method is created  with creating body called Concrete Method
        {
            return No1 + No2;
        }

        virtual int Substraction(int No1, int No2) = 0; // -----
        // The method is created  without creating body called Abstract Method
};

#pragma pack(1)
class Derived : public Base
{
    public:
        int x;    

        int Substraction(int No1, int No2) // 2000
        {
            return No1 - No2;
        }

        int Multiplication(int No1, int No2)
        {
            return No1 * No2;
        }

};


int main()
{
    
    Derived dobj;
    int Ret = 0;

    
    cout<<"Size of Base class is :"<<sizeof(Base)<<"\n";
    cout<<"Size of Derived class is :"<<sizeof(Derived)<<"\n";

    Ret = dobj.Addition(11,10);
    cout<<"Addition is :"<<Ret<<"\n";

    Ret = dobj.Substraction(11,10);
    cout<<"Substraction is :"<<Ret<<"\n";

    Ret = dobj.Multiplication(11,10);
    cout<<"Multiplication is :"<<Ret<<"\n";

    return 0;
}