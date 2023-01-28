#include<iostream>
using namespace std;
void reverse(string rev);
main()
{
 string rev;
 cout <<"Enter true or fasle: ";
 cin >> rev;
 reverse(rev);
}
void reverse(string rev)
{
 if (rev == "true")
  cout << "False ";
 if (rev == "false")
  cout << "True ";
}
