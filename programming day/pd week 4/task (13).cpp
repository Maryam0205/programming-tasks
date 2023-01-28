#include<iostream>
using namespace std;
void challan(int speed);
main()
{
 int speed;
 cout << "Enter the speed of the car: ";
 cin >> speed;
 challan(speed);
}
void challan(int speed)
{
 if (speed > 100)
  cout << "Halt....YOU WILL BE CHALLANGED!!!";
 if (speed <= 100)
  cout << "Perfect! You're going good.";
}