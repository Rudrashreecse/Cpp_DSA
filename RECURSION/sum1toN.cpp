#include<iostream>
using namespace std;
void sum(int a,int n){
if(n==0) {
    cout<<a;
    return ;
}
sum(a+n,n-1);
}
int main(){
int n;
cout<<"enter the no: ";
cin>>n;
sum(0,n);

}