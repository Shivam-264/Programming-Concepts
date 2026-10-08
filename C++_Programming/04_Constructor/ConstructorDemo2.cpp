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

        ~PPA()
        {
            cout<<"inside Destructor\n";
        }
      
};

int main()
{
    PPA pobj1;
    PPA pobj2(11,21);



    


    
    return 0;
}