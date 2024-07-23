#include<iostream>
using namespace std;
int main(){
    int a=5;
    int* p=&a;
    *p=10;//it update the value of such varible which adress it hold
    cout<<*p<<endl;
    cout<<a;
}