#include<iostream>
using namespace std;
main(){
cout << "enter a 4-digit number: ";
int num;
cin >> num;
int num1=  num%10;
int num2 = (num/10)%10;
int num3 = (num/100)%10;
int num4 = (num/1000)%10;
int sum = num1+num2+num3+num4;
cout << sum; 





}






