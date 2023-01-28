#include<iostream>
using namespace std;
void table(int digit);
main()
{
    int digit;
    cout <<"Enter the digit: ";
    cin >> digit;
    table(digit);
}
void table(int digit)
{
    for(int x=1; x<= 10; x++)
    {
        int y;
        y = x*digit;
        cout <<digit <<"*" <<x <<"=" << y <<endl;
    }
}