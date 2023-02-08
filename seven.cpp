#include <iostream>
using namespace std;
bool findnum(int number);
main()
{
    int size;
    bool flag;
    cout<<"Enter the size of array: ";
    cin>>size;
    int num[size];
    for(int i=0;i<=size-1;i++)
    {
        cout<<"Enter number: ";
        cin>>num[i];
        if(findnum(num[i])==true)
        {
            flag=true;
        }
    }
    if(flag==true)
    {
        cout<<"Boom";
    }
    else
    {
        cout<<"There is no 7 in the array";
    }
    
}
bool findnum(int number)
{
    while(number>=0)
    {
        int rem=number%10;
        number=number/10;
        if(rem==7)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    return 0;
}