#include <iostream>
using namespace std;
main(){
int bag;
int cost;
int area;
int fertilizerPerPound;
int fertilizerPerArea;
cout << "Enter bag size in pounds: ";
cin >> bag;
cout << "Enter cost of the bag: ";
cin >> cost;
cout << "Enter are covered by each bag in square feet: ";
cin >> area;
fertilizerPerPound = cost/bag;
fertilizerPerArea = bag*area;
cout << "the cost of fertilizer per pound is: "<<fertilizerPerPound <<endl ;
cout << "The cost of fertilizing the area per square foot is: " <<fertilizerPerArea <<endl;
}

