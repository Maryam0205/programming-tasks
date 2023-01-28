#include <iostream>
using namespace std;
int triangle(int num);
main()
{
    int num, dots;
    cout << "Enter triangle ";
    cin >> num;
    dots = triangle(num);
    cout << "Number of dots are " << dots;
}
int triangle(int num)
{
    int dots = 0;
    for (int x = 1; x <= num; x++)
    {
        dots = dots + x;
    }
    return dots;
}