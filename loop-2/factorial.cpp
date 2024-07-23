#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the number ";
cin>>n;
int c=1;
while(n>=1){
c=c*n;
n--;
}
cout<<"Factorial= "<<c;
}