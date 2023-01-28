#include<iostream>
using namespace std;
void checkCapital(char alphabet);
main()
{
 char alphabet;
 cout <<"Enter a character(A ora): ";
 cin >>alphabet;
 checkCapital(alphabet) ;
 
}
void checkCapital(char alphabet)
{
 if (alphabet == 'A')
  cout <<"You have entered Capital A";
 if (alphabet == 'a')
  cout <<"You have entered smaal A";
}