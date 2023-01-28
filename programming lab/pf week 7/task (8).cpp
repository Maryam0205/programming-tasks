#include <iostream>
using namespace std;
int frequencyChecker(int num ,int digit);
main()
{
    int num,digit,result;
    cout << "Enter a number: ";
    cin >> num;
    cout <<"Enter digit: ";
    cin >> digit;
    result = frequencyChecker( num , digit);
    cout << result;
}
int frequencyChecker(int num, int digit)
{
    int x=0, div =num;
    while (div != 0)
    {
        int mod = div%10;
        div = div / 10;
        if(mod == digit)
        {
            x++;
        }
    }
    return x;
}