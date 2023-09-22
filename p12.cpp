#include<iostream>
using namespace std;
main(){
cout << "Number of square meters you can paint: ";
int n;
cin >> n;
cout << "Width of the single wall (in meters): ";
int w;
cin >> w;
cout << "Height of the single wall (in meters): ";
int h;
cin >> h;
int area = w*h;
int wallsYouCanPaint;
wallsYouCanPaint = n/area;
cout << "Number of walls you can paint: " << wallsYouCanPaint ;




}