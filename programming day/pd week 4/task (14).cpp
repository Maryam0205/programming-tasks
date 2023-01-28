#include<iostream>
using namespace std;
void flowers(int num1, int num2, int num3);
main()
{
 int num1,num2,num3;
 cout <<"Red Rose: ";
 cin >> num1;
 cout <<"White Rose: ";
 cin >> num2;
 cout <<"Tulips: ";
 cin >> num3;
 flowers(num1,num2,num3);
}
void flowers(int num1, int num2, int num3)
{
 float totalPrice = (num1*2.00)+(num2*4.10)+(num3*2.50);
 if(totalPrice > 200.00)
 {
  cout << "Original Price: "<<totalPrice <<endl;
  totalPrice = totalPrice - (totalPrice*0.2);
  cout <<"Price after Discount: "<<totalPrice;
 }
 if(totalPrice <= 200)
 {
  cout << "Original Price: "<<totalPrice;
 }
}
  