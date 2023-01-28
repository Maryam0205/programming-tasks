#include<iostream>
using namespace std;
bool isSymmetrical(int num);
main()
{
 int num,sym;
 cout << "Enter a three digit number ";
 cin >> num;
 sym = isSymmetrical(num);
 
}
bool isSymmetrical(int num){
 int num1,num2,num3;
 int rem1,rem2,rem3;
 num3 = num/10;
 rem3 = num%10;
 num2 = num3/10;
 rem2 = num3%10;
 num1 = num2/10;
 rem1 = num2%10;
   if (rem3 == rem1)
     cout << "symmetric" <<endl;
 if (rem3 != rem1)
   cout << "not symmetric" <<endl;
   return 0;
}