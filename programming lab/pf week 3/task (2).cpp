#include <iostream>
using namespace std;
main(){
double megabytes;
double kilobytes;
double bytes;
double bits;
cout << "Enter megabytes ";
cin >>megabytes;
kilobytes = megabytes*1024;
bytes = kilobytes*1024;
bits = bytes*8;
cout <<"in bits "<<bits;
}