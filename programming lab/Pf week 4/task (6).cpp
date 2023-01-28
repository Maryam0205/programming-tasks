#include <iostream>
using namespace std;

void add(int number1, int number2);
void multiply(int number1, int number2);
void divide(int number1, int number2);
void substract(int number1, int number2);

main(){
 int number1, number2;
 char choice;
while(1){
 cout <<"Enter 1st number ";
 cin >> number1;
 cout <<"Enter 2nd number ";
 cin >> number2;
 cout << "Enter operator ";
 cin >> choice;
 if (choice == '+'){
  add(number1,number2);}
 if (choice == '-'){
  substract(number1,number2);}
 if (choice == '*'){
  multiply(number1,number2);}
 if (choice == '/'){
  divide(number1,number2);}
 }
}

void add(int number1, int number2){
int sum = number1 + number2;
cout << "sum is " <<sum <<endl;
}

void multiply(int number1, int number2){
int mul = number1 * number2;
cout << "Product is " <<mul <<endl;
}

void divide(int number1, int number2){
int div = number1 / number2;
cout << "Division is " <<div <<endl;
}

void substract(int number1, int number2){
int sub = number1 - number2;
cout << "substraction is " <<sub <<endl;
}
