#include<iostream>
using namespace std;
main()
{
    int rows;
    cout <<"Enter number of rows: ";
    cin >> rows;
    for( int r=1; r<=rows; r++)
    {
        for(int c=r; c <= rows;c++)
        {
            cout << "*";
        }
        cout <<endl;
    }
}