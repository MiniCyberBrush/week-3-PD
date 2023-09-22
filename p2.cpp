#include<iostream>
using namespace std;
main(){
cout << "Number of Minutes: ";
int minutes;
cin >> minutes;
cout << "Frames per Second: ";
int frames;
cin >> frames;
int total_frames;
total_frames = minutes*60*frames;
cout << "Total Number of Frames: " << total_frames;



}