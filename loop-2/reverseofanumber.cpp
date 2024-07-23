#include<iostream>
using namespace std;
int main(){
    int n;//REVERSE OF A NUMBER 
    cout<<"enter the number ";
    cin>>n;
    int a=0;
    int b=0;
    int c=0;
while(n>0){
    a=a*10;
    c=(n%10);
    a=a+c;
    n=n/10;
}

cout<<"reverse is: "<<a;
}
