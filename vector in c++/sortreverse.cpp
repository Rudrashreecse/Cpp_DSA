#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
vector<int>v={9,1,6,2};

cout<<"the vector is "<<endl;
for(int i=0; i<=3;i++){
    cout<<v.at(i)<<" ";
}
cout<<endl;
cout<<"after sorting "<<endl;

reverse(v.begin(),v.end());//reverse the vector 
for(int i=0; i<=3;i++){
    cout<<v[i]<<" ";
}
}
