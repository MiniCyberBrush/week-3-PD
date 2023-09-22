#include<iostream>
using namespace std;
main(){
cout << "Enter vegetable price per kilogram (in coins): ";
float vegetable_price;
cin >> vegetable_price;
cout << "Enter fruit price per kilogram (in coins): ";
float fruit_price;
cin >> fruit_price;
cout << "Enter total kilograms of vegetables: ";
int kilogram_vegetable;
cin >> kilogram_vegetable;
cout << "Enter total kilograms of fruits: ";
int kilogram_fruits;
cin >> kilogram_fruits;
int earning;
earning = vegetable_price*kilogram_vegetable + fruit_price*kilogram_vegetable;
int total_earningRPS;
total_earningRPS = earning/1.94;
cout << "Total earnings in Rupees (Rps): " << total_earningRPS;




}