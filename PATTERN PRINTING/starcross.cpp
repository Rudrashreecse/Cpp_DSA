#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter value of n ";
cin>>n;
int i,j;
for( i=1;i<=n;i++){
for( j=1;j<=n;j++){
if((i+j)==n+1||i==j){
    cout<<"*";
    }
    else 
    {
        cout<<" ";
        }
}

cout<<endl;
}
}