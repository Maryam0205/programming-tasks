#include <iostream>
using namespace std;
main(){
string name;
int adultTicket;
int childTicket;
int noOfAdult;
int noOfChild;
int donation;
float total;
float totalAfterDonation;
cout << "Enter movie name: ";
cin >> name;
cout << "Enter Adult ticket price: ";
cin >> adultTicket;
cout << "Enter child ticket price : ";
cin >> childTicket;
cout << "Enter number of adult ticket: ";
cin >> noOfAdult;
cout << "Enter number of child ticket: ";
cin >> noOfChild;
cout << "Enter percentage of donation: ";
cin >> donation;
total = (childTicket * noOfChild) + (adultTicket * noOfAdult);
totalAfterDonation = (total * donation) - total;
cout << "Total amount: " <<total <<endl;
cout << "total after donation: " << totalAfterDonation;
}


