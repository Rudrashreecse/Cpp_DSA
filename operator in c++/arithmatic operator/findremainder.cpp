#include<iostream>
using namespace std;
int main(){
    //find remainder when a/b
int a,b;//condition a>b
cout<<"enter the value of a: ";
cin>>a;
cout<<"enter the value of b: ";
cin>>b;
int z,r;//"r"stores remainder value
z=a/b;
r=a-(z*b);
cout<<"remainder is:"<<r;

}