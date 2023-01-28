#include<iostream>
using namespace std;
int calculateGCD(int num1,int num2);
int calculateLCM(int num1,int num2, int gcd);
#include<cmath>
main()
{
    int num1,num2,gcd,lcm;
    cout <<"Enter first number: ";
    cin >>num1;
    cout <<"Enter second number: ";
    cin >>num2;
    gcd = calculateGCD(num1,num2);
    lcm = calculateLCM(num1,num2,gcd);
    cout << "GCD: " << gcd <<endl;
    cout << "LCM: " << lcm <<endl;
}
int calculateGCD(int num1,int num2)
{
    int gcd,i=1;
    while( i<= num1 && i<= num2 )
    {
        if(num1%i == 0 && num2%i == 0)
        {
            gcd = i;
        }
        i++;
    } 
    return gcd;
}
int calculateLCM(int num1,int num2,int gcd)
{
    int lcm;
    lcm = (num1 * num2)/gcd;
    return lcm;
}