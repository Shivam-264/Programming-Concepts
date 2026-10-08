#include<iostream>
using namespace std;

int main()
{
    int Age  = 0;

    cout<< "Enter Your Age : \n";
    cin>> Age;

    if(Age < 18)
    {
        cout<< "Not Allowed For Voting \n";
    }
 
    else
    {
        cout<<"Allowed for Voting \n";
    }

    return 0;
}