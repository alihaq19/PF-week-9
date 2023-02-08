#include <iostream>
using namespace std;
main()
{
    int i=0;
    string name;
    cout<<"Enter a string name: ";
    getline(cin,name);
    while(name[i]!='\0')
    {
        cout<<"The letter at index "<< i <<" is "<< name[i]<<endl;
        i++;
    }
}