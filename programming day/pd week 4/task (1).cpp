#include<iostream>
using namespace std;
void catSleep(int holiday);
main()
{
 int holidays;
 cout << "Holidays: ";
 cin >> holidays;
 catSleep(holidays);
}
void catSleep(int holidays)
{
 int workingDays = 365-holidays;
 int play = (holidays*127) + (workingDays*63);
 int differ;
 int hours, minutes;
 if (play >= 30000)
 {
  differ = play - 30000;
  cout << "Tom will run away"<<endl;
  hours = differ/60;
  minutes = differ - hours*60;
  cout <<hours <<" hours and ";
  cout << minutes << " minutes for play";
 }
 if (play < 30000)
 {
  differ = 30000 - play;
  cout << "Tom sleeps well"<<endl;
  hours = differ/60;
  minutes = differ - hours*60;
  cout <<hours <<" hours and ";
  cout << minutes << " minutes less for play";
 }
}