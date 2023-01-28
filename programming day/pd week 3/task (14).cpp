#include<iostream>
using namespace std;
main(){
int num;
int num1;
int num2;
int num3;
int rem;
int rem1;
int rem2;
int rem3;
int total;
cout << "Enter a four digit integer: ";
cin >> num;
rem = num%10;
num1 = num/10;
rem1 = num1%10;
num2 = num1/10;
rem2 = num2%10;
num3 = num2/10;
rem3 = num3%10;
cout << "Position 1 is: "<< rem3 <<endl;
cout << "Position 2 is: "<< rem2 <<endl;
cout << "Position 3 is: "<< rem1 <<endl;
cout << "Position 4 is: "<< rem  <<endl;
total = (rem1+rem3)+(rem2*rem);
cout << "Total: " <<total;
}
