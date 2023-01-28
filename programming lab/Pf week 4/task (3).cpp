#include<iostream>
using namespace std;
void addition(int num1,int num2);
void subtraction(int num1,int num2);
void multiplication(int num1,int num2);
void division(int num1,int num2);
main()
{
 int num1,num2;
 char choice;
 cout << "Enter 1st number ";
 cin >> num1;
 cout << "Enter 2nd number ";
 cin >> num2;
 cout << "Enter operration symbol(+,-,*,/) ";
 cin >> choice;
 if (choice == '+')
  addition(num1,num2);
 if (choice == '-')
  subtraction(num1,num2);
 if (choice == '*')
  multiplication(num1,num2);
 if (choice == '/')
  division(num1,num2);
 cout <<endl;
}
void addition(int num1,int num2)
{
 int sum = num1+num2;
 cout << "Sum " <<sum;
 cout <<endl;
}
void subtraction(int num1,int num2)
{
 int sub = num1-num2;
 cout << "Subtraction " <<sub;
 cout <<endl;
}
void multiplication(int num1,int num2)
{
 int mul = num1*num2;
 cout << "Product " <<mul;
 cout <<endl;
}
void division(int num1,int num2)
{
 int div = num1/num2;
 cout << "divition " <<div;
 cout <<endl;
}