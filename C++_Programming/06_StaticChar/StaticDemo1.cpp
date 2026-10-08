#include<iostream>
using namespace std;

class Demo
{
    public:
        int No1;
        int No2;
        static int x;

};

int main()
{
    Demo obj1;
    Demo obj2;

    cout<<sizeof(obj1);
    return 0;
}