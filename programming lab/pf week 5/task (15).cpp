#include<iostream>
#include<windows.h>
using namespace std;
main()
{
 int num1,num2,result;
 cout <<"Enter 1st number ";
 cin >> num1;
 cout <<"Enter 2nd number ";
 cin >> num2;
 result = min(num1,num2);
 cout << result << " is minimum" <<endl;
}