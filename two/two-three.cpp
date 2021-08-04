#include <iostream>
using namespace std;

int main()
{
    int savings;
    cout<<"Enter the amount of savings you have-\n";
    cin>>savings;

    if (savings>5000)
    {   if (savings>10000)
    {
        cout<<"You should go out for a roadtrip with Neha";
    }
        else
        cout<<"Shopping with Neha";
    }
    else if (savings>2000)
    {
        cout<<"You should go with Rashmi";
    }
    else
    {
        cout<<"You should go with your friends.";

    }   
}