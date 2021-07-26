/// Rectangle Pattern  Questions -

#include <iostream>
using namespace std;

int main()
{
    int rows,col;
    cin>>rows;
    cin>>col;

    for (int  i = 0; i < rows; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}