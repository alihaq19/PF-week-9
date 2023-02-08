#include <iostream>
using namespace std;
main()
{
    int count=0;
    string name;
    cout<<"Enter a string line: ";
    getline(cin,name);
    while(name[count]!='\0')
    {
        count++;
    }
    if(count%2==0)
    {
        cout<<"The length is "<< count << "which is even";
    }
    else 
    {

    cout<<"The length is "<< count << "which is odd";
    }
}
