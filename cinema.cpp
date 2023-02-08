#include <iostream>
using namespace std;
main()
{
    string film[5]={"gladiator","terminator","starwars","titanic","avengers"};
    int price;
    string movie;
    bool flag;
    cout<<"Enter the name of the movie: ";
    cin>>movie;
    for(int i=0;i<5;i++)
    {
        if(i%2!=0 &&film[i]==movie)
        {
            flag=true;
            
        }
    }
    if(flag==true)
    {
        price=500-(500*0.05);
        cout<<"The discounted price is "<< price;
    }
    else
    {
        price=500-(500*0.1);
        cout<<"The discounted price is "<< price;
    }
}
