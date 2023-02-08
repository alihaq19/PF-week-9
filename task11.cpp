#include <iostream>
using namespace std;
main()
{
    string name;
    int i=0;
    int count=0;
    cout<<"Enter a string name: ";
    cin>>name;
    while(name[i]!='\0')
    {
        if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u')
        {
           count++;
        }
        i++;
    }
    cout<<"The number of vowels are: "<< count ;
}