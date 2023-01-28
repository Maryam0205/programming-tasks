#include<iostream>
using namespace std;
main()
{
 int hours,days,workers,comHours;
 cout <<"No of hours needed: ";
 cin >>hours;
 cout <<"No of days firm has: ";
 cin >>days;
 cout <<"No of workers: ";
 cin >>workers;
 comHours = days - days*0.1;
 comHours = comHours*10;
 comHours = comHours*workers;
 if(comHours >= hours)
  cout <<"yes!";
 if(comHours < hours)
  cout <<"Not enogh time";
}