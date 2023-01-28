#include<iostream>
using namespace std;
main()
{
    int pHour,pMin,aHour,aMin,pTime,aTime,hour,min,time;
    cout << "Enter Paper time(hours) ";
    cin >> pHour;
    cout <<"Enter Paper time(min) ";
    cin >> pMin;
     cout << "Enter arrival time(hours) ";
    cin >> aHour;
    cout <<"Enter arrival time(min) ";
    cin >> aMin;
    pTime = (pHour*60) + pMin;
    aTime = (aHour*60) + aMin;
    if(aTime > pTime)
    {
        cout << "Late " <<endl;
        time = aTime - pTime;
        hour = time/60;
        min = time%60;
        cout << hour << ":" << min <<" after the start";
    }
    else if((aTime < pTime) || ((aTime-pTime) <= 30))
    {
        cout <<"On time " <<endl;
        time = aTime - pTime;
        cout << time <<" before the start ";

    }
    else if(aTime < pTime)
    {
        cout <<"Early " <<endl;
         time = pTime - aTime;
        hour = time/60;
        min = time%60;
        cout << hour << ":" << min <<" before the start";
    }
}