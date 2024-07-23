#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number ";
    cin>>n;
    int a=0;
while(n>0){
    a=a+(n%10);
    n=n/10;
}
cout<<"sum of digits are: "<<a;
}
