#include<iostream>
using namespace std;

int minimum(int x, int y){

if(x<y) return x;
else return y;

}

int main(){
int x,y;
cout<<"enter two numbers ";
cin>>x>>y;
cout<<"minimum is "<<minimum(x,y);

}