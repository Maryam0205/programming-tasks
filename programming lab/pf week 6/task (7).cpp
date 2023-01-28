#include <iostream>
using namespace std;
bool sameNumber(int num1, int num2, int num3);
main()
{
    int num1, num2, num3, result;
    cout << "Enter 1st number ";
    cin >> num1;
    cout << "Enter 2nd number ";
    cin >> num2;
    cout << "Enter 3rd number ";
    cin >> num3;
    result = sameNumber(num1, num2, num3);
    if (result == 1)
    {
        cout << "Yes";
    }
    else
        cout << "No";
}
bool sameNumber(int num1, int num2, int num3)
{
    if (num1 == num2 && num2 == num3)
    {
        return true;
    }
    else
    {
        return false;
    }
}
