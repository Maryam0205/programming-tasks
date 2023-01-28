#include <iostream>
using namespace std;
void iseligible(int age);
main(){
int age;
cout <<"Enter your age ";
cin >>age;
iseligible(age);
}
void iseligible(int age){
if(age>=18){
  cout << "You are eligible"<<endl;}
if (age<18){
  cout << "You are not eligible"<<endl;}
}

