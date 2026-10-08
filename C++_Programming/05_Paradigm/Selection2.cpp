#include<iostream>
using namespace std;

int main()
{
    int Age  = 0;

    cout<< "Enter Your Age : \n";
    cin>> Age;

    if(Age >= 18)
    {
        cout<< "Allowed For Voting \n";
    }
 
    else
    {
        cout<<"Not Allowed for Voting \n";
    }

    return 0;
}