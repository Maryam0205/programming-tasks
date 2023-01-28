#include<iostream>
using namespace std;
main(){
int num;
int rem1;
int num1;
int rem2;
int num2;
int rem3;
int num3;
int rem4;
int total;
cout << "Enter a four digit number: ";
cin >> num;
rem1 = num%10;
num1 = num/10;
rem2 = num1%10;
num2 = num1/10;
rem3 = num2%10;
num3 = num2/10;
rem4 = num3%10;
total = rem1+rem2+rem3+rem4;
cout << "total is: " <<total;
}