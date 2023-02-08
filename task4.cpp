#include <iostream>
using namespace std;
main()
{
    int size;
    int mul;
    int multiply=0;
    cout<<"Enter the size of array: ";
    cin>>size;
    int num[size];
    cout<<"Enter a number to multiply: ";
    cin>>mul;
    for(int i=size-1;i>=0;i--)
    {
        cout<<"Enter number: ";
        cin>>num[i];
        multiply=mul*num[i];
        cout<<"The multiplied number at index "<< i <<" is "<< multiply<<endl;
    }
}