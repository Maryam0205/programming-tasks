#include<iostream>
using namespace std;
main()
{
 int minutes,hours;
 cout <<"enter hours: ";
 cin >>hours;
 cout <<"enter minutes: ";
 cin >>minutes;
 minutes = minutes + (hours*60);
 minutes = minutes+15;
 hours = minutes/60;
 minutes = minutes - (hours*60);
 if (hours >=24)
  hours= hours-24;
 cout <<"time after 15 min is: ";
 cout <<hours <<" hours " <<minutes <<" minutes";
}
