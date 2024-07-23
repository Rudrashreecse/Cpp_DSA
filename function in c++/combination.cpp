#include<iostream>
using namespace std;

int fact(int x){

int y=1;
for(int i=1;i<=x;i++){
    y*=i;
}
return y;
}
int combination(int n, int r){
    int nfact=fact(n);
int rfact=fact(r);
int n_rfact= fact(n-r);
int comb= nfact/(rfact*n_rfact);
return comb;
}
int main(){
int n;
cout<<"enter the value of n ";
cin>>n;
int r;
cout<<"enter the value of r ";
cin>>r;
cout<<"combination is "<<combination(n,r);
}