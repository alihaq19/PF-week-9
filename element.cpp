#include <iostream>
using namespace std;
main()
{
    bool flag;
    string element[4];
    for(int i=0;i<=3;i++)
    {
        cout<<"Enter a string name: ";
        cin>>element[i];
        if(element[0]==element[1]&&element[0]==element[2]&&element[0]==element[3])
        {
            flag=true;
        }
    }
    if(flag==true)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
}