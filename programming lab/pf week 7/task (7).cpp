#include <iostream>
using namespace std;
int totalDigit(int num);
main()
{
    int num,digit;
    cout << "Enter a number: ";
    cin >> num;
    digit = totalDigit(num);
    cout << digit;
}
int totalDigit(int num)
{
    int div = num/10;
    int x = 1;
    while (div != 0)
    {
        div = div / 10;
        x++;
    }
    return x;
}