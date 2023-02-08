#include <iostream>
using namespace std;
main()
{
    string fruitname[4]={"peach","apple","guava","watermelon"};
    int price[4]={60,70,40,30};
    string fruit;
    int quantity;
    int found;
    int total;
    cout<<"Enter the name of fruit: ";
    cin>>fruit;
    cout<<"Enter the quantity: ";
    cin>>quantity;
    for(int i=0;i<5;i++)
    {
        if(fruitname[i]==fruit)
        {
            found=i;
            total=price[i]*quantity;
        }
    }
    cout<<total;

}