#include <iostream>
using namespace std;
float calculateMoney(int age, float wmPrice, int tPrice);
main()
{
    int age, tPrice;
    float wmPrice;
    cout << "Enter age ";
    cin >> age;
    cout << "Enter washing machine price: ";
    cin >> wmPrice;
    cout << "Enter toys price ";
    cin >> tPrice;
    float bmoney = 0, tmoney = 0, money = 0;
    int n = 1;
    for (int x = 1; x <= age; x++)
    {
        if (x % 2 == 0)
        {
            bmoney = bmoney + (n * 9);
            n++;
        }
        else
        {
            tmoney = tmoney + tPrice;
        }
    }
    money = bmoney + tmoney;
    if (money >= wmPrice)
    {
        cout << "Yes!" <<endl;
        cout << money - wmPrice;
    }
    else if (money < wmPrice)
    {
        cout << "No!" <<endl;
        cout <<wmPrice - money;
    }
}
float calculateMoney(int age, float wmPrice, int tPrice)
{
}