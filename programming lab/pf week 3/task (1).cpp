#include<iostream>
using namespace std;
main(){
float matric;
float inter;
float ecat;
float aggregate;
string name;
cout <<"Enter your name ";
cin >>name;
cout <<"Enter matric marks ";
cin >>matric;
cout <<"Enter inter marks ";
cin >> inter;
cout << "Enter ecat marks ";
cin >> ecat;
matric = (matric/1100) * 10;
inter = (inter/550) * 40;
ecat = (ecat/400) * 50;
aggregate = matric + inter + ecat ;
cout << "Your aggregate is "<<aggregate;
}