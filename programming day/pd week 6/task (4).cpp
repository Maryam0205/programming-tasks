#include <iostream>
using namespace std;
main()
{
    int rows, drows, erows;
    cout << "Enter rows: ";
    cin >> rows;
    drows = rows * 2;
    for (int r = 1; r <= rows; r++)
    {
        for (int c = 1; c < drows; c++)
        {
            erows = drows - r;
            if (c <= r)
                cout
                    << "*";
            else if ((c >= erows) && (c < drows))
                cout << "*";
            else
                cout << " ";
        }
        cout <<endl;
    }
}