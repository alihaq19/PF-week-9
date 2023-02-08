#include <iostream>
using namespace std;
main()
{
    int size;
    int insert;
    cout<<"Enter the size of second array: ";
    cin>>size;
    int arr1[1];
    int arr2[size];
    for(int i=0;i<2;i++)
    {
        cout<<"Enter number: "<<endl;
        cin>>arr1[i];
    }
   
    for(int i=0;i<size;i++)
    {
        cout<<"Enter number: "<<endl;
        cin>>arr2[i];
    }
    int arr3[size+2];
    for(int i=0;i<arr3[size+2];i++)
    {
        arr3[i]=arr2[i]+arr1[i];
        cout<<arr3[i];
    }
   
}
