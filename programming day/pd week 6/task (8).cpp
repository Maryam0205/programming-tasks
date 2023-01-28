#include <iostream>
using namespace std;
main()
{
    char type, time;
    float price, serviceUse, charge;
    cout << "Enter service type ";
    cin >> type;
    if (type == 'r' || type == 'R')
    {
        cout << "Enter numbe rof min you used service ";
        cin >> serviceUse;
        if (serviceUse > 50)
        {
            serviceUse = serviceUse - 50;
            price = serviceUse * 0.10;
            charge = 10 + price;
        }
        else
        {
            charge = 10;
        }
    }
    else if (type == 'p' || type == 'P')
    {
        cout << "Enter d for day time and n for night time ";
        cin >> time;
        cout << "Enter numbe rof min you used service ";
        cin >> serviceUse;
        if (time == 'D' || time == 'd')
        {
            if (serviceUse > 75)
            {
                serviceUse = serviceUse - 75;
                price = serviceUse * 0.10;
                charge = 25 + price;
            }
            else
            {
                charge = 25;
            }
        }
        else if (time == 'N' || time == 'n')
        {
            if (serviceUse > 100)
            {
                serviceUse = serviceUse - 100;
                price = serviceUse * 0.05;
                charge = 25 + price;
            }
            else
            {
                charge = 25;
            }
        }
        else
            cout << "error";
    }
    cout << "The charges are: " << charge << "$";
}