#include <iostream>
using namespace std;
main()
{
    char letter;
    string name;
    int size;
    bool flag;
    cout<<"Enter a string name: ";
    getline(cin,name);
    cout<<"Enter a character: ";
    cin>>letter;
   size = name.length();
   for(int i=0;i<size;i++)
   {
    if(name[i]==letter)
     {
      flag==true;
     }
   }
   if(flag==true)
   {
    cout<<"Found";
   }
   else 
   {
    cout<<"Not found";
   }

   
}