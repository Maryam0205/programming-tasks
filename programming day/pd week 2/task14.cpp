#include<iostream>
using namespace std;
void printMenu();
void calculateAggregate(string name,float matricMarks, float interMarks,float ecatMarks);
void compareMarks(string nameStd1, float ecatMarksStd1, string nameStd2,float ecatMarksStd2);
main()
{
here:
 system("cls");
 printMenu();
 string nameStd1, nameStd2;
 float matricMarksStd1,matricMarksStd2,interMarksStd1,interMarksStd2,ecatMarksStd1,ecatMarksStd2;
 int x;
 char c;
 cout <<"Press 1 to enter details of first student"<<endl;
 cout <<"Press 2 to enter details of second student"<<endl;
 cout <<"Press 3 to calculate the aggregate of first student"<<endl;
 cout <<"Press 4 to calculate the aggregate of second student"<<endl;
 cout <<"Press 5 to display the student with roll no 1"<<endl;
 cout <<"enter choice ";
 cin >> x;
 if (x == 1)
 {
  cout << "name: ";
  cin >> nameStd1;
  cout <<"Matric marks: ";
  cin >>matricMarksStd1;
  cout <<"inet marks: ";
  cin >>interMarksStd1;
  cout <<"ecat marks: ";
  cin >>ecatMarksStd1;
 }
 if (x == 3)
 {
  calculateAggregate(nameStd1, matricMarksStd1, interMarksStd1, ecatMarksStd1);
  cout<<endl;
 }
 if (x == 2)
 {
  cout << "name: ";
  cin >> nameStd2;
  cout <<"Matric marks: ";
  cin >>matricMarksStd2;
  cout <<"inet marks: ";
  cin >>interMarksStd2;
  cout <<"ecat marks: ";
  cin >>ecatMarksStd2;
 }
 if (x == 4)
 {
  calculateAggregate(nameStd2, matricMarksStd2, interMarksStd2, ecatMarksStd2);
  cout<<endl;
 }
 if (x == 5)
 {
 compareMarks(nameStd1, ecatMarksStd1, nameStd2, ecatMarksStd2);
 }
 cout <<"Enter any character to continue ";
 cin >> c;
 cout<<endl;
 goto here; 
}
void printMenu()
{
cout << " *************************************************      " <<endl;
cout << " *                                               * " <<endl;
cout << " *            University Admission               *   " <<endl;
cout << " *              Management System                *   " <<endl;
cout << " *                                               *  " <<endl;
cout << " *************************************************        " <<endl;
}
void calculateAggregate(string name,float matricMarks, float interMarks,float ecatMarks)
{
float matric;
float inter;
float ecat;
float aggregate;
matric = (matricMarks/1100) * 10;
inter = (interMarks/550) * 40;
ecat = (ecatMarks/400) * 50;
aggregate = matric + inter + ecat ;
cout << name <<"'s aggregate is "<<aggregate;


}
void compareMarks(string nameStd1, float ecatMarksStd1, string nameStd2,float ecatMarksStd2)
{
if(ecatMarksStd1 > ecatMarksStd2)
 cout << nameStd1 <<" is rool no 1";
if(ecatMarksStd1 < ecatMarksStd2)
 cout << nameStd2 <<" is rool no 1";
if(ecatMarksStd1 ==  ecatMarksStd2)
 cout <<" Both have equal marks";
}