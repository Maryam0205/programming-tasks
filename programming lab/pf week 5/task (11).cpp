#include<iostream>
using namespace std;
main()
{
 float volume,pipe1,pipe2,result1,result2;
 float hours;
 cout <<"Enter volume of pool ";
 cin >>volume;
 cout <<"Enter flow rate of first pipe ";
 cin >>pipe1;
 cout <<"enter flow rate of second pipe ";
 cin >>pipe2;
 cout <<"enter hours ";
 cin >>hours;
 result1 = (pipe1*hours) + (pipe2*hours);
 if (result1 <= volume)
 {
   result2 = (result1/volume)*100;
   cout <<"the pool is " <<result2 << "% full";
 }
 if (result1 > volume)
 {
  result2 = result1 - volume;
  cout <<"the pool is overflown with "<<result2 <<" litres";
 }
}