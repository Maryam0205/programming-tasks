#include <iostream>
using namespace std;
main()
{
    float cargo, ton;
    cout << "Enter number of cargo ";
    cin >> cargo;
    float totalTon = 0, average, buston = 0, truckton = 0, trainton = 0, busper = 0, truckper = 0, trainper = 0, result;
    for (int x = 1; x <= cargo; x++)
    {
        cout << "Enter tons: ";
        cin >> ton;
        totalTon = totalTon + ton;
        if (ton >= 1 && ton <= 3)
        {
            busper = busper + ton;;
            buston = buston + (ton * 200);
        }
        else if (ton >= 4 && ton <= 11)
        {
            truckper = truckper + ton;
            truckton = truckton + (ton * 175);
        }
        else if (ton >= 12 )
        {
            trainper = trainper + ton;
            trainton = trainton + (ton * 120);
        }
    }
    average = (buston + truckton + trainton) / totalTon;
    cout << average << endl;
    result = (busper * 100) / totalTon ;
    cout << result << endl;
    result = (truckper * 100) / totalTon;
    cout << result << endl;
    result = (trainper * 100) / totalTon;
    cout << result << endl;
}
