#include<iostream>
using namespace std;//take float input and print the fractional part
int main(){
float x;
cout<<"enter the decimal number: ";
cin>>x;
int y= (int)x;
x=x-y;
cout<<"the fractional the value  is ";
cout<<x;

}