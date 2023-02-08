#include <iostream>
using namespace std;
main()
{
    int i=0;
    int j=0;
    int x=0;
    int count=0;
    string arr;
    string arr2;
    cout<<"Enter string array number 1: ";
    getline(cin,arr);
    cout<<"Enter the string array number 2: ";
    getline(cin,arr2);
    while(arr[i]!='\0')
    {
        i++;
    }
    while(arr2[j]!='\0')
    {
        j++;
    }
    while(x<5)
    {
        if(arr[i]==arr2[j])
        {
            count=count+1;
        }
    }
    cout<<count;
    

}