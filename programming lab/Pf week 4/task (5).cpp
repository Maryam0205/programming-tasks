#include <iostream>
using namespace std;
void printName(string name);
main(){
string name; 
 while(1){
  cout <<"Enter your name ";
  cin >>name;
  printName(name);
 }

}
void printName(string name){
 cout << "Your name is " <<name;
 cout <<endl;

}