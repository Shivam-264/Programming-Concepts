#include<iostream>
using namespace std;

class PPA
{
    public:
        int no1;
        int no2;

        // Default Constructor
        PPA()
        {
            cout<<"Inside Default Constructor\n";
        }

        // parameterised constructor
        PPA(int a, int b)
        {
            cout<<"Inside paramrterize Constructor\n";
        }


        // copy constructor
        PPA(PPA &obj)
        {
            cout<<"Inside copy constructor\n";
        }

        ~PPA()
        {
            cout<<"inside Destructor\n";
        }
      
};

int main()
{
    PPA pobj1;  // Default
    PPA pobj2(11,21); // Parameterised
    PPA pobj3(pobj1);  // Copy



    


    
    return 0;
}