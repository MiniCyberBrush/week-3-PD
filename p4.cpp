#include<iostream>
using namespace std;
main(){
cout << "Enter Imposter Count: ";
float imposter_count;
cin >> imposter_count;
cout << "Enter Player Count: ";
float player_count;
cin >> player_count;
float imposter;
imposter = 100*(imposter_count/player_count);
cout << "Chance of being an imposter: " << imposter << "%";



}