#include<iostream>
using namespace std;/* 1 //pascal triangle---every element of pascal triangle is iCj
                                                                                   
                      1 1
                      1 2 1
                      1 3 3 1
                      1 4 6 4 1
                      1 5 10 5 5 1*/

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
cout<<"pascal tringle is :"<<endl;
for(int i=0;i<=n;i++){
    for(int j=0;j<=i;j++){
    cout<<combination(i,j)<<" ";
    }
    cout<<endl;
}
}