 #include<iostream>
using namespace std;
void isEven(int num);
main(){
 int num;
 while(1)
 {
  cout << "Enter a number ";
  cin >> num;
  isEven(num);
 }
}
void isEven(int num)
{
 if (num%2 == 0)
 {
  cout << "This is an even number ";
 }
 if (num%2 != 0)
 {
  cout << "This is an odd number ";
 }
 cout <<endl;
}