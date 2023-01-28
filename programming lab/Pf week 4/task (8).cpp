#include <iostream>
using namespace std;
void display(string name,int marks, float aggregate, char section);
main(){
string name;
int marks;
float aggregate;
char section;
cout << "Enter your name: ";
cin >> name;
cout << "Enter your marks: ";
cin >>marks;
cout << "Enter your aggregate: ";
cin >> aggregate;
cout << "Enter your section: ";
cin >>section;
display(name,marks,aggregate,section);



}
void display(string name,int marks,float aggregate,char section){
cout << "Your name is " <<name <<endl;
cout << "Your marks are "<<marks <<endl;
cout << "Your aggregate is "<<aggregate<<endl;
cout << "Your section is "<<section<<endl;


}