#include<iostream>
using namespace std;
bool isEvenish(int num);
main()
{
 int num,sym;
 cout << "Enter a five digit number ";
 cin >> num;
 sym = isEvenish(num);
 
}
bool isEvenish(int num){
 int num1,num2,num3,num4,num5;
 int rem1,rem2,rem3,rem4,rem5;
 num5 = num/10;
 rem5 = num%10;
 num4 = num5/10;
 rem4 = num5%10;
 num3 = num4/10;
 rem3 = num4%10;
 num2 = num3/10;
 rem2 = num3%10;
 num1 = num2/10;
 rem1 = num2%10;
 int total = rem1+rem2+rem3+rem4+rem5;
 cout <<total;
 if (total%2 == 0)
   cout <<"\tEvenish";
 if (total%2 != 0)
   cout <<"\tOddish";
}