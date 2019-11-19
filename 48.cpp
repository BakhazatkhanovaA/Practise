 #include<iostream>
#include<cmath>
using namespace std;
int main(){
int a,b,c,d;
cin>>a>>b>>c;
if(a+b>b+c){
	cout<<a<<" "<<b;}
	else if(a+c>c+b){
		cout<<a<<" "<<c;}
	else{
		cout<<b<<" "<<c;}
 return 0;}

