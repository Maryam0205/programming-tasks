#include<iostream>
#include<cmath>
using namespace std;

main()
{
  float a=5, b=6,c=1;
  float result1,result2;
  result1 = pow(b,2);
  result1 = result1 - (4*a*c);
  result1 = sqrt(result1);
  result1 = -b-result1;
  result1 = result1/(2*a);
  cout << "first Value of x is " << result1 <<endl;
  result2 = pow(b,2);
  result2 = result2 - (4*a*c);
  result2 = sqrt(result2);
  result2 = -b+result2;
  result2 = result2/(2*a);
  cout << "second Value of x is " << result2 <<endl;
}
  