#include<iostream>
#include<windows.h>
#include<cmath>
using namespace std;




main(){
 int num1,num2,result;
 cout <<"Enter 1st number ";
 cin >> num1;
 cout <<"Enter 2nd number ";
 cin >> num2;
 result = pow(num1,num2);
 cout << "result: " << result <<endl;
}