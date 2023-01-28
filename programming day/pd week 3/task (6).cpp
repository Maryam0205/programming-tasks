#include <iostream>
using namespace std;
main(){
string name;
int sub1;
int sub2;
int sub3;
int sub4;
int sub5;
float percentage;
cout <<"Enter your name ";
cin>> name;
cout <<"Enter 1st subject number: ";
cin>> sub1;
cout <<"Enter 2nd subject number: ";
cin>> sub2;
cout <<"Enter 3rd subject number: ";
cin>> sub3;
cout <<"Enter 4th subject number: ";
cin>> sub4;
cout <<"enter 5th subject number: ";
cin>> sub5;
percentage = (sub1+sub2+sub3+sub4+sub5);
percentage = (percentage/500) * 100;
cout <<"Your percentage is: "<<percentage;
}