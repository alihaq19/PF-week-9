#include <iostream>
using namespace std;
main()
{
    char letter;
    string name;
    int length;
    cout<<"Enter a string name: ";
    getline(cin,name);
    cout<<"Enter a character: ";
    cin>>letter;
   length= name.length();
    if(name[length-1]==letter)
    {
        cout<<"Same";
    }
    else 
    {
        cout<<"Not same ";
    }
}