#include<iostream>
using namespace std;
main(){
float vegCost;
float fruitCost;
int vegKilo;
int fruitKilo;
float totalVeg;
float totalFruit;
float total;
cout << "Enter price of vegetable: ";
cin >> vegCost;
cout << "Enter price of fruits: ";
cin >> fruitCost;
cout << "Enter weight of vegetable: ";
cin >> vegKilo;
cout << "Enter weight of fruits: ";
cin >> fruitKilo;
totalVeg = vegCost * vegKilo;
totalFruit = fruitCost * fruitKilo;
total = (totalFruit + totalVeg) * 1.04;
cout << "Total earning in RPs is: " <<total;
}