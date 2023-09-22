#include<iostream>
using namespace std;
main(){
cout << "Enter the number of sides of the polygon: ";
int sides;
cin >> sides;
int internal_angle;
internal_angle = (sides-2)*180;
cout << "The sum of internal angles of a " << sides << "-sided polygon is: " << internal_angle << " degrees";



}