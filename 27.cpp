 #include<iostream>
#include<cmath>
using namespace std;
void swap(int *a,int *b,int *c){

a+=b;
b=a-b;
a-=b;
c+=a;
a=c-a;
c-=a;
}
int main(){
int a,b,c;
cin>>a>>b>>c;
cout<<&a<<" "<<&b<<" "<<&c;
return 0;}

