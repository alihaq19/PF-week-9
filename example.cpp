#include <iostream>
using namespace std;
main()
{
    int size;
    int sum=0;
    int average;
    cout<<"Enter the size of array: ";
    cin>>size;
    int num[size];
   for(int idx=0;idx<size;idx++)
   {
    cout<<"Enter a number: ";
    cin>>num[idx];
    sum=sum+num[idx];
   }
   average=sum/size;
   cout<<sum<<endl<<average;
}