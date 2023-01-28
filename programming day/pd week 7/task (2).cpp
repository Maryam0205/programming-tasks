#include <iostream>
using namespace std;
void printPercentage(int number);
main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    printPercentage(number);
}
void printPercentage(int number)
{
    float  p2 = 0, p3 = 0, p4 = 0, result, count = 0;
    while (count < number)
    {
        int num;
        cout << "Enter a number: ";
        cin >> num;
        if (num % 2 == 0)
        {
            p2++;
        }
        if (num %3 == 0)
        {
            p3++;
        }
        if (num %4 == 0)
        {
            p4++;
        }
        count++;
    }
    result = p2 / number * 100;
    cout << "P2: " << result << endl;
    result = p3 / number * 100;
    cout << "P3: " << result << endl;
    result = p4 / number * 100;
    cout << "P4: " << result << endl;
}