#include <iostream>
using namespace std;
void printPercentage(int number);
main()
{
    int number, p1, p2, p3, p4, p5, count = 0;
    cout << "Enter a number: ";
    cin >> number;
    printPercentage(number);
}
void printPercentage(int number)
{
    float p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0, result, count = 0;
    while (count < number)
    {
        int num;
        cout << "Enter a number: ";
        cin >> num;
        if (num < 200 && num >= 0)
        {
            p1++;
        }
        else if (num < 300 && num >= 200)
        {
            p2++;
        }
        else if (num < 600 && num >= 300)
        {
            p3++;
        }
        else if (num < 800 && num >= 600)
        {
            p4++;
        }
        else if (num <= 1000 && num >= 800)
        {
            p5++;
        }
        count++;
    }
    result = p1 / number * 100;
    cout << "P1: " << result << endl;
    result = p2 / number * 100;
    cout << "P2: " << result << endl;
    result = p3 / number * 100;
    cout << "P3: " << result << endl;
    result = p4 / number * 100;
    cout << "P4: " << result << endl;
    result = p5 / number * 100;
    cout << "P5: " << result << endl;
}