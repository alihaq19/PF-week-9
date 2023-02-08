#include <iostream>
using namespace std;
main()
{
    int size;
    int number;
    int smallest=0;
    cout<<"Enter the size of array: ";
    cin>>size;
    int num[size];
    for(int i=0;i<size;i++)
    {
        cout<<"Enter number: ";
        cin>>num[i];
        if(num[i]<smallest)
        {
            smallest=num[i];
        }
    }
    cout<<smallest;

}