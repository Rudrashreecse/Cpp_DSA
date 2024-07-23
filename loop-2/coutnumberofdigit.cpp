#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the number ";
cin >>n;
int a=0;
int b=n;
while(n>0){
n=n/10;
a++;
}
if(b==0){ 
    cout<<"number of digits are 1";
    }
else {
    cout<<"number of digits are: "<<a;
}
}