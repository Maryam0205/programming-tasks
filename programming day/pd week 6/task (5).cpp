#include <iostream>
using namespace std;
main()
{
    string temp, humidity;
    cout << "Enter temperature(warm/cold) ";
    cin >> temp;
    cout << "Enter humidity(dry/humid) ";
    cin >> humidity;
    if (temp == "warm" && humidity == "dry")
        cout << "Play tennis";
    if (temp == "warm" && humidity == "humid")
        cout << "swim";
    if (temp == "cold" && humidity == "dry")
        cout << "play basketball";
    if (temp == "cold" && humidity == "humid")
        cout << "watch tennis";
}