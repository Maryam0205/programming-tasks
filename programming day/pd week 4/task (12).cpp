#include<iostream>
using namespace std;
void discount(string contury, float price);
main()
{
 string country;
 float price;
 while(1)
 {
  cout <<"Enter the name of the Country: ";
  cin >> country;
  cout <<"Enter ticket price in dollars: ";
  cin >> price;
  discount(country,price);
  cout<<endl;
 }
}
void discount(string country, float price)
{
 float finalPrice;
 if(country == "Pakistan")
 {
  finalPrice = price - price * 0.05;
  cout << "Price after discount is " <<finalPrice;
 }

 if (country == "Ireland")
 {
  finalPrice = price - price * 0.1;
  cout << "Price after discount is " <<finalPrice;
 }
 if (country == "India")
 {
  finalPrice = price - price * 0.2;
  cout << "Price after discount is " <<finalPrice;
 }
 if (country == "England")
 {
  finalPrice = price - price * 0.3;
  cout << "Price after discount is " <<finalPrice;
 } 
 if (country == "Canada")
 {
  finalPrice = price - price * 0.45;
  cout << "Price after discount is " <<finalPrice;
 }
}
   