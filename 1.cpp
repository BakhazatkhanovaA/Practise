 #include<iostream>
#include<cmath>
using namespace std;
int main(){
int a;
cin>>a;
if(a==1 || a==2 || a==12 ){cout<<"Winter";}
	else if(a>=3 && a<=5){cout<<"Spring";}
	else if(a>=6 && a<=8){cout<<"Summer";}
	else{cout<<"Autumn";}
  return 0;}
	
