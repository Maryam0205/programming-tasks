#include <iostream>
using namespace std;
void series(int num);
main()
{
    int num;
    cout <<"Enter a number: ";
    cin >> num;
    series(num);
}
void series(int num)
{
    int n1=0, n2=1;
    cout << n1 <<endl;
    for(int x=2; x<= num; x++)
    {
        int sum =0;
        sum = n1+n2;
        cout <<sum <<endl;
        n1 = n2;
        n2 = sum;
    }
}