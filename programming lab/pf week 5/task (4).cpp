#include<iostream>
using namespace std;
bool isSymmetrical(int num);
main()
{
 int num,sym;
 cout << "Enter a five digit number ";
 cin >> num;
 sym = isSymmetrical(num);
 
}
bool isSymmetrical(int num){
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
 if (rem5 == rem1)
   if (rem4 == rem2)
     cout << "symmetric" <<endl;
 if ((rem5 != rem1)||(rem4 != rem2))
   cout << "not symmetric" <<endl;
   return 0;
}