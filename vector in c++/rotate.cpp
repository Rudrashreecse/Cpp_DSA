#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void reversepart(int i, int j, vector<int>&v){
    int temp;
    while(i<j){
        temp=v[i];
    v[i]=v[j];
    v[j]=temp;
    i++;
    j--;
    }
}


int main(){
vector<int>v={1,2,3,4,5,6};

cout<<"the vector is "<<endl;
for(int i=0; i<=5;i++){
    cout<<v.at(i)<<" ";
}
cout<<endl;
int k;
int n=v.size();
cout<<"enter the value of k: ";
cin>>k;
cout<<"after rotating"<<k<<"times th array is: "<<endl;
reversepart(0,n-k-1,v);
reversepart(n-k,n-1,v);
reversepart(0,n-1,v);
for(int i=0; i<=5;i++){
    cout<<v.at(i)<<" ";
}


}
