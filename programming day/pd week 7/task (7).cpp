#include<iostream>
using namespace std;
void upper(int hRows);
void lower(int hRows);
main()
{
    int rows,hRows;
    cout <<"Enter rows ";
    cin >> rows;
    hRows = rows/2;
    upper(hRows);
    lower(hRows);
}
void upper(int hRows)
{
     for( int r=1; r<=hRows; r++)
    {
        for(int c=hRows; c>=1 ;c--)
        {
            if(c>r)
            {
                cout<<" ";
            }
            else
            cout<<"*";
        }

        cout <<endl;
    }
}
void lower(int hRows)
{
     for( int r=1; r<=hRows; r++)
    {
        for(int c=1; c <= hRows; c++)
        {
            if(c>=r)
            cout << "*";
            else
            cout << " ";

        }
        cout <<endl;
    }
}