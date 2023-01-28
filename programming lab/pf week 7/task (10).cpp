#include <iostream>
using namespace std;
int totalSum(int num);
main()
{
    int num,sum;
    cout << "Enter a number: ";
    cin >> num;
    sum = totalSum(num);
    cout << sum;
}
int totalSum(int num)
{
    int div = num/10;
    int mod = num%10;
    int sum = mod;
    while (div != 0)
    {
        mod = div%10;
        div = div / 10;
        sum = sum + mod;
    }
    return sum;
}