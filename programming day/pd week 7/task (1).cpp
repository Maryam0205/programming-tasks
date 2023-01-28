#include <iostream>
using namespace std;
main()
{
    int days, patient, treatedPatient1 = 0, untreatedPatient = 0, treatedPatient2 = 0, treatedPatient = 0;
    cout << "Enter days: ";
    cin >> days;
    int n = 7;
    for (int x = 1; x <= days; x++)
    {
        cout << "Enter number of patient ";
        cin >> patient;
        if (x % 3 == 0)
        {
            if (untreatedPatient > treatedPatient)
            {
                n++;
            }
        }
        if (patient <= n)
            treatedPatient = treatedPatient + patient;
        else if (patient > n)
        {
            treatedPatient = treatedPatient + n;
            untreatedPatient = untreatedPatient + (patient - n);
        }
    }
    cout << "Treated Patient: " << treatedPatient << endl;
    cout << "Untreated Patient: " << untreatedPatient << endl;
}
