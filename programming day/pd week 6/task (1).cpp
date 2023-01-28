#include <iostream>
using namespace std;
main()
{
    int stay;
    string month;
    float studio, apartment;
    cout << "Enter month ";
    cin >> month;
    cout << "Enter no. of stay ";
    cin >> stay;
    if (month == "may" || month == "october")
    {
        studio = stay * 50;
        apartment = stay * 65;
        if (stay > 7 && stay < 14)
        {
            studio = studio - (studio * 0.05);
        }
        if (stay > 14)
        {
            studio = studio - (studio * 0.3);
            apartment = apartment - (apartment * 0.1);
        }
    }
    else if (month == "june" || month == "september")
    {
        studio = studio * 75.20;
        apartment = apartment * 68.70;
        if (stay > 14)
        {
            apartment = apartment - (apartment * 0.1);
            studio = studio - (studio * 0.2);
        }
    }
    else if (month == "july" || month == "august")
    {
        studio = studio * 76;
        apartment = stay * 77;
        if (stay > 14)
        {
            apartment = apartment - (apartment * 0.1);
        }
    }
    else
        cout << "error";
    cout << "Apartment: " << apartment << endl;
    cout << "studio: " << studio;
}