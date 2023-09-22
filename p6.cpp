#include<iostream>
using namespace std;
main(){
cout << "Enter the size of the fertilizer bag in pounds: ";
int size;
cin >> size;
cout << "Enter the cost of the bag: $";
int cost;
cin >> cost;
cout << "Enter the area in square feet that can be covered by the bag: ";
int area;
cin >> area;
int per_pound;
per_pound = cost/size;
int per_squarefoot;
per_squarefoot = cost/area; 
cout << "Cost of fertilizer per pound: $" << per_pound<<endl;
cout << "Cost of fertilizing per square foot: $" << per_squarefoot;



}