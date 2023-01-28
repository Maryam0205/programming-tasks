#include<iostream>
#include<windows.h>
#include<cmath>
float calculateHeight(float base, float angle);
using namespace std;




main(){
 float base,angle,result;
 cout <<"Enter base ";
 cin >> base;
 cout <<"Enter angle ";
 cin >> angle;
 result = calculateHeight(base,angle);

 cout <<"Height is " << result <<endl;
 
}
float calculateHeight(float base, float angle)
{
 float height;
 float rad = angle/57.2958;
 height = tan(rad);
 height = height * base;
 return height;

}