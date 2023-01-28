#include<iostream>
using namespace std;
int multiply(int num);
main()
{
 int num;
 cout <<"Enter a number ";
 cin >>num;
 int result = multiply(num);
 cout << "Answer is " <<result;
}
int multiply(int num)
{
 int result = num*5;
 return result;
}
