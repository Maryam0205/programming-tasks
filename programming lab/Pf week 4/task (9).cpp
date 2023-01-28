#include<iostream>
using namespace std;
void maximum(int num1, int num2);
void minimum(int num1, int num2);
void isEqual(int num1, int num2);
main() 
{
 int num1,num2,choice;
 while(1)
 {
  cout << "Enter 1st number ";
  cin >> num1;
  cout << "Enter 2nd number ";
  cin >> num2;
  cout << "Enter choice(1-3) ";
  cin >> choice;
  if (choice == 2) 
   minimum(num1,num2);
  if (choice == 1)
   maximum(num1,num2);
  if (choice == 3)
   isEqual(num1,num2);
 }
}
void minimum(int num1, int num2)
{
 if (num1 > num2)
  cout <<num2 << " is smaller number";
 if (num2 > num1)
  cout <<num1 << " is smaller number ";
 cout<<endl;
}
void maximum(int num1, int num2)
{
 if (num1 > num2)
  cout <<num1 << " is greater number";
 if (num2 > num1)
  cout <<num2 << " is greater number ";
 cout <<endl;
 
}
void isEqual(int num1, int num2)
{
 if (num1 == num2)
  cout << "Both are equal";
 if (num1 != num2)
  cout << "they are not equal ";
 cout<<endl;

}


