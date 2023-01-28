#include <iostream>
#include <cmath>
using namespace std;
float volume(float length, float width, float height, string unit);
main()
{
    float length, width, height, result;
    string unit;
    cout << "Length: ";
    cin >> length;
    cout << "Widht: ";
    cin >> width;
    cout <<"Height: ";
    cin >> height;
    cout << "unit: ";
    cin >> unit;
    result = volume(length, width, height, unit);
    cout << result << " cubic " << unit;
}
float volume(float length, float width, float height, string unit)
{
    float length2, width2, height2, volume;
    if (unit == "milimeter")
    {
        length2 = length * 1000;
        width2 = width * 1000;
        height2 = height * 1000; 
    }
    if (unit == "centimeter")
    {
        length2 = length*100;
        width2 = width*100;
        height2 = height*100;
    }
    if (unit == "meter")
    {
        length2 = length;
        height2 = height;
        width2 = width;
    }
    if (unit == "kilometer")
    {
        length2 = length/1000;
        width2 = width/1000;
        height2 = height/1000;
    }
    volume = length2*width2*height2;
    volume = volume/3;
    return volume;
}
