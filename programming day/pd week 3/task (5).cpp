#include <iostream>
using namespace std;
main() {
int initialVelocity;
int acceleration;
int time;
int finalVelocity;
cout << "Enter initial velocity: ";
cin >>initialVelocity;
cout << "Enter Acceleration: ";
cin >> acceleration;
cout << "Enter time: ";
cin >> time;
finalVelocity = (acceleration * time) + initialVelocity;
cout << "Final velocity is: "<< finalVelocity;
}
