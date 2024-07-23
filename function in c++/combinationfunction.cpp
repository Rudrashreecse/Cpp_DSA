#include<iostream>
using namespace std;

int combination(int x, int y){

int xfact=1;
for(int i=1;i<=x;i++){
    xfact*=i;
}
int yfact=1;
for(int i=1;i<=y;i++){
    yfact*=i;
}
int x_yfact=1;
for(int i=1;i<=(x-y);i++){
    x_yfact*=i;
}
int comb = xfact/(yfact*x_yfact);
return comb;
}

int main(){
int n;
cout<<"enter the value of n ";
cin>>n;
int r;
cout<<"enter the value of r ";
cin>>r;
int comb=combination(n,r);
cout<<"combination is "<<comb;
}