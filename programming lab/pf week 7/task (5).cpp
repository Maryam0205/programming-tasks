#include<iostream>
using namespace std;
main()
{
    float inheritence,oddmoney=0,evenmoney=0 ,tmoney;
    int year,tYear;
    cout << "Enter inheritemce ";
    cin >> inheritence;
    cout << "Enter year till he wants to live ";
    cin >> year;
    int age =18;
    for(int x = 1800; x<= year; x++)
    {
        
        if( x%2 == 0)
        {
            evenmoney = evenmoney + 12000;
        }
        else 
        {
            int y = year -x;
            int z = 12000 + (50*y);
            oddmoney = oddmoney + (12000 + (50*(age))) ;
            age = age+2;
        }
    }
    tmoney = evenmoney + oddmoney;
    if(tmoney > inheritence)
    {
        cout <<"He will need " << tmoney - inheritence << " money to survive " <<endl;
    }
    else if(tmoney <= inheritence)
    {
        cout <<"Yes! He will live a carefree life and will have " << inheritence - tmoney << " dollar left ";
    }
}