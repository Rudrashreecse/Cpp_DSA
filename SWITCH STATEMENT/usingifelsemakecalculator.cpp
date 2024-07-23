#include<iostream>
using namespace std;
int main(){
cout<<"enter problem: ";
int a,b;
char op;
cin>>a>>op>>b;
if(op=='+'){
    cout<<a+b;
}
if(op=='-'){
    cout<<a-b;
}

if(op=='*'){
    cout<<a*b;
}

if(op=='/'){
    cout<<a/b;
}


}