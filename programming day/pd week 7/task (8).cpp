#include<iostream>
using namespace std;
void amplify(int num);
main()
{
    int num;
    cout <<"Enter a number: ";
    cin >>num;
    amplify(num);
}
void amplify(int num)
{
    for(int x =1; x <= num; x++)
    {
        if(x%4 == 0)
        {
            cout << x*10 <<",";
        }
        else
        {
            cout << x << ",";
        }
    }
}
