#include<iostream>
using namespace std;
int main(){
    int x,y;
    int *p1=&x;
    int *p2=&y;
cout<<"enter first number: ";
cin>>*p1;//we can also access input of x through pointer
cout<<"enter second number: ";
cin>>*p2;
 cout<<"sum is: "<<*p1+*p2<<endl;
 cout<<"sum is: "<<x+y;
}