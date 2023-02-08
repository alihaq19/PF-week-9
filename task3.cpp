#include <iostream>
using namespace std;
main()
{
    int size;
    int number;
    bool flag;
    cout<<"Enter the size of array: ";
    cin>>size;
    int num[size];
    for(int i=0;i<size;i++)
    {
        cout<<"Enter number: ";
        cin>>num[i];
    }
    cout<<"Enter the number: ";
    cin>>number;
    for(int j=0;j<size;j++)
    {
        if(number==num[j])
        {
            flag=true;
        }
    }
    if(flag==true)
    {
        cout<<"Already exists";
    }
    else
    {
        cout<<"Doesn't exist";
    }

}