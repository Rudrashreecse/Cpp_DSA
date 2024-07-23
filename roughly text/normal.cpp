#include<iostream>
using namespace std;
int main (){

int a =200, b=200;

int*  p=&a;
int * q = &b;
p=q;
*p=5;
cout<<*p<<endl;
cout<<*q<<endl;
cout<<a<<endl;
cout<<b<<endl;
}