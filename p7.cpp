#include<iostream>
using namespace std;
main(){
cout << "Enter the movie name: ";
string name;
cin >> name;
cout << "Enter the adult ticket price: $";
int adult_ticket;
cin >>adult_ticket;
cout << "Enter the child ticket price: $";
int child_ticket;
cin >> child_ticket;
cout << "Enter the number of adult tickets sold: ";
int adult_number;
cin >> adult_number;
cout << "Enter the number of child tickets sold: ";
int child_number;
cin >> child_number;
cout << "Enter the percentage of the amount to be donated to charity: ";
int percentage;
cin >> percentage;
int total_amount;
total_amount = adult_ticket*adult_number + child_ticket*child_number;
int charity;
charity = total_amount/10;
int remaining;
remaining = total_amount - charity;
cout << "Movie :" << name<<endl;
cout << "Total amount generated from the ticket sales: $" << total_amount<<endl;
cout << "Donation to charity (10%): $" << charity <<endl;
cout << "Remaining amount after donation: $" << remaining;



}