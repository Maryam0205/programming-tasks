#include <iostream>
using namespace std;
main()
{
    int budget, people;
    string category;
    float total, transport, price;
    cout << "Enter your budget ";
    cin >> budget;
    cout << "Enter category ";
    cin >> category;
    cout << "Enter number of people ";
    cin >> people;
    if (people >= 1 || people <= 4)
        transport = budget * 0.75;
    if (people >= 5 || people <= 9)
        transport = budget * 0.6;
    if (people >= 10 || people <= 24)
        transport = budget * 0.5;
    if (people >= 25 || people <= 49)
        transport = budget * 0.4;
    if (people >= 50)
        transport = budget * 0.25;
    total = budget - transport;
    if (category == "vip")
        price = people * 499.99;
    if (category == "normal")
        price = people * 249.99;
    if (price < total)
        cout << "yes! you have " << total - price << " QR left.";
    if (price > total)
        cout << "Not enough money! You need " << price - total << " QR";
}