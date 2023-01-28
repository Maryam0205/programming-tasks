#include <iostream>
using namespace std;
main()
{
    string fruit, day;
    float quantity;
    float price;
    cout << "Enter name of the fruit ";
    cin >> fruit;
    cout << "Enter name of the day ";
    cin >> day;
    cout << "Enter quantity ";
    cin >> quantity;
    if (day == "sunday" || day == "saturday")
    {
        if (fruit == "banana")
            price = quantity * 2.70;
        else if (fruit == "apple")
            price = quantity * 1.25;
        else if (fruit == "orange")
            price = quantity * 0.90;
        else if (fruit == "grapefruit")
            price = quantity * 1.60;
        else if (fruit == "kiwi")
            price = quantity * 3.00;
        else if (fruit == "pineapple")
            price = quantity * 5.60;
        else if (fruit == "grapes")
            price = quantity * 4.20;
        else
            cout << "Error";
    }
    else if (day == "monday" || day == "tuesday" || day == "wednesday" || day == "thursday" || day == "friday")
    {
        if (fruit == "banana")
            price = quantity * 2.50;
        else if (fruit == "apple")
            price = quantity * 1.20;
        else if (fruit == "orange")
            price = quantity * 0.85;
        else if (fruit == "grapefruit")
            price = quantity * 1.45;
        else if (fruit == "kiwi")
            price = quantity * 2.70;
        else if (fruit == "pineapple")
            price = quantity * 5.50;
        else if (fruit == "grapes")
            price = quantity * 3.85;
        else
            cout << "Error";
    }
    else
        cout << "error";
    cout << "price is " << price;
}