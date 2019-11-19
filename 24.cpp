#include<iostream>
#include<cmath>
using namespace std;
int main(){
int days,sale;
float sum = 0;
cin >> days >> sale >> sum;
sale=sale/100;
for(int i = 0; i < days; i++){
sum += 3; 
 sum=sum+(sum*sale);
cout<< sum << endl;}
return 0;}

