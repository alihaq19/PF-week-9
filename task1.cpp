#include <iostream>
using namespace std;
main()
{
    int size;
    int sum=0;
    float average;
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
   cout<<"The sum is "<< sum<<endl<<"The average is "<< average;
}