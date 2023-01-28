#include <iostream>
using namespace std;
main()
{
    int kilo;
    string time;
    float taxi, bus, train;
    cout << "Enter kilograms ";
    cin >> kilo;
    cout << "Enter time of the day ";
    cin >> time;
    if (time == "day")
    {
        taxi = kilo * 0.7;
    }
    if (time == "night")
    {
        taxi = kilo * 0.90;
    }
    if (kilo >= 20)
    {
        bus = kilo * 0.09;
        if (kilo >= 100)
        {
            train = kilo * 0.06;
        }
    }
    if (taxi > bus)
    {
        if (bus > train)
            cout << train << " by train";
        else
            cout << bus << " by bus";
    }
    else
    {
        if (taxi < train)
            cout << taxi << " by taxi";
        else
            cout << train << " by train";
    }
}