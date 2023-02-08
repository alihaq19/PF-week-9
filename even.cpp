#include <iostream>
using namespace std;
main()
{
    int trans;
    int arr[3];
    int number;
    cout<<"Enter array: ";
    cin>>arr[0]>>arr[1]>>arr[2];
    cout<<"Enter the number of times the transformation is needed: ";
    cin>>trans;
    if(arr[0]%2==0)
    {
        number=arr[0]-2;
        for(int i=1;i<trans;i++)
        {
            number=number-2;
        }
    }
    else
    {
        number =arr[0]+2;
        for(int i=1;i<trans;i++)
        {
       number=number+2;
        }
    }
    cout<<number<<endl;
    if(arr[1]%2==0)
    {
        number=arr[1]-2;
        for(int i=1;i<trans;i++)
        {
            number=number-2;
        }
    }
    else
    {
         number =arr[1]+2;
        for(int i=1;i<trans;i++)
        {
       number=number+2;
        }
    }
    cout<<number<<endl;
    if(arr[2]%2==0)
    {
        number=arr[2]-2;
        for(int i=1;i<trans;i++)
        {
            number=number-2;
        }
    }
    else
    {
        number =arr[2]+2;
        for(int i=1;i<trans;i++)
        {
       number=number+2;
        }
    }
    cout<<number;
    
    
    
}