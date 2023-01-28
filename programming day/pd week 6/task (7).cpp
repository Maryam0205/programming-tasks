#include <iostream>
using namespace std;
string astrology(string month, int date);
main()
{
    int date;
    string month;
    cout << "Date = ";
    cin >> date;
    cout << "Month = ";
    cin >> month;
    cout << "Peple born on this date have zodiac ";
    cout << astrology(month, date);
}
string astrology(string month, int date)
{
    string zodiac;
    if (month == "march")
    {
        if (date <= 21)
            zodiac = "Pices";
        else
            zodiac = "Aries";
    }
    else if (month == "april")
    {
        if (date <= 19)
            zodiac = "Aries";
        else
            zodiac = "Taurus";
    }
    else if (month == "may")
    {
        if (date <= 20)
            zodiac = "Taurus";
        else
            zodiac = "Gemini";
    }
    else if (month == "june")
    {
        if (date <= 20)
            zodiac = "Gemini";
        else
            zodiac = "Cancer";
    }
    else if (month == "july")
    {
        if (date <= 22)
            zodiac = "Cancer";
        else
            zodiac = "Leo";
    }
    else if (month == "august")
    {
        if (date <= 22)
            zodiac = "Leo";
        else
            zodiac = "Virgo";
    }
    else if (month == "september")
    {
        if (date <= 22)
            zodiac = "Virgo";
        else
            zodiac = "Libra";
    }
    else if (month == "october")
    {
        if (date <= 22)
            zodiac = "Libra";
        else
            zodiac = "Scorpio";
    }
    else if (month == "november")
    {
        if (date <= 21)
            zodiac = "Scorpio";
        else
            zodiac = "Sagittarius";
    }
    else if (month == "december")
    {
        if (date <= 21)
            zodiac = "Sagittarius";
        else
            zodiac = "Cappricon";
    }
    else if (month == "january")
    {
        if (date <= 19)
            zodiac = "Capricorn";
        else
            zodiac = "Aquarius";
    }
    else if (month == "february")
    {
        if (date <= 18)
            zodiac = "Aquarius";
        else
            zodiac = "pices";
    }
    return zodiac;
}