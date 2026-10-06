#include<iostream>
using namespace std;


#pragma pack(1)
class Base
{
    public:
        int i,j;

        void fun()
        { cout<<"Base Fun\n";  }

        void gun()
        { cout<<"Base gun\n";  }

        virtual void sun()
        { cout<<"Base sun\n";  }

        virtual void run()
        { cout<<"Base run\n";  }

};    // 16 Bytes


#pragma pack(1)
class Derived : public Base
{
    public:
        int x;

        void fun()
        { cout<<"Derived Fun\n";  }

        virtual void sun()          // virtual is not compulsory to write in derived
        { cout<<"Derived sun\n";  }

        virtual void mun()
        { cout<<"Derived mun\n";  }

        void bun()
        { cout<<"derived bun\n";  }
};   // 20 Bytes



int main()
{
    Base *bp = new Derived();

    bp -> fun();
    bp -> gun();
    bp -> sun();
    bp -> run();
    bp -> mun();  // Error
    bp -> bun();  // Error

    return 0;
}