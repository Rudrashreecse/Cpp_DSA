#include<iostream>
using namespace std;
void swap(int a, int b){
a=a+b;
b=a-b;
a=a-b;
cout<<a<<" "<<b;
}

int main(){
int a,b;
cout<<"before swapping ";
cin>>a>>b;
cout<<" after swapping ";
swap(a,b);
}