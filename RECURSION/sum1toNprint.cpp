#include<iostream>
using namespace std;
int sum1toN(int n){
if(n==0) {
    return n;
}
return n+sum1toN(n-1);
}
int main(){
int n;
cout<<"enter the no: ";
cin>>n;
cout<<sum1toN(n);
return 0;
}