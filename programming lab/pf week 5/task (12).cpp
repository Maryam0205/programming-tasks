#include<iostream>
using namespace std;
void sum(int num1, int num2);
main()
{
 int num1,num2;
 cout <<"Enter 1st number ";
 cin >>num1;
 cout <<"Enter 2nd number ";
 cin >>num2;
 sum(num1,num2);

}
void sum(int num1, int num2){
 int sum = num1+num2;
 cout <<"Sum is "<<sum;

}