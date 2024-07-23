#include<iostream>
using namespace std;
void swap(int* a, int* b){
int c;
c=*a;
*a=*b;
*b=c;
}
int main(){
int a,b;
cout<<"before swapping ";
cin>>a>>b;
cout<<" after swapping ";
swap(&a,&b);
cout<<a<<" "<<b;
}