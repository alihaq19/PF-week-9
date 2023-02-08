#include <iostream>
using namespace std;
main()
{
    string name;
    int length;
    cout<<"Enter a string name: ";
    getline(cin,name);
    length=name.length();
    if(length%2==0)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
}