#include <iostream>
using namespace std;
main()
{
    char choice = 'y';
    while (choice == 'y')
    {
        cout << "I am Happy !" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
    }
}