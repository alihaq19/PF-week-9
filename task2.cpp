#include <iostream>
using namespace std;
main()
{
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int num[size];
    for(int i=size-1;i>=0;i--)
    {
        cout<<"Enter number: ";
        cin>>num[i];
        cout<<"The number at index "<< i <<" is "<< num[i]<<endl;
    }
}