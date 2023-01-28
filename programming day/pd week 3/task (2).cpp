#include<iostream>
using namespace std;
main(){
int mark1;
int mark2;
int mark3;
int total;
int average;
cout << "Enter total number: ";
cin >>total;
cout << "Enter 1st marks: ";
cin >> mark1;
cout << "Enter 2nd marks: ";
cin >> mark2;
cout << "Enter 3rd marks: ";
cin >> mark3;
average = (mark1+mark2+mark3)/3;
cout << "Average is: " <<average;
}
