#include<iostream>
using namespace std;
void calculatorBill(string day, int amount);
main()
{
 string day;
 int amount;
 cout << "Enter day ";
 cin >> day;
 cout << "Enter amount ";
 cin >> amount;
 calculatorBill(day, amount);
}
void calculatorBill(string day, int amount)
{
 if (day == "sunday")
 {
   float bill = amount - (amount*0.1);
   cout << "Your bill is " <<bill;
   cout <<endl;
 }
 if (day != "sunday")
 {
   cout << "Your bill is " <<amount;
   cout <<endl;
 } 
}   