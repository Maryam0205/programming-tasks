#include <iostream>
using namespace std;
float payAble(string day, string month, int bill);
main()
{
    string day, month;
    float bill, total;
    cout << "Enter day ";
    cin >> day;
    cout << "Enter month ";
    cin >> month;
    cout << "Enter total bill ";
    cin >> bill;
    total = payAble(day, month, bill);
    cout << "Total payable bill is " << total;
}
float payAble(string day, string month, int bill)
{
    float total;
    float discount;
    if (day == "sunday")
    {
        if (month == "october" || month == "march" || month == "august")
        {

            discount = bill * 0.1;
            total = bill - discount;
        }
        else
            total = bill;
    }
    else if (day == "monday")
    {
        if (month == "november" || month == "december")
        {
            discount = bill * 0.05;
            total = bill - discount;
        }
        else
            total = bill;            
    }

    else
        total = bill;
    return total;
}