#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
vector<int>v={8,7,6,5,4};

cout<<"the vector is "<<endl;
for(int i=0; i<v.size();i++){
    cout<<v.at(i)<<" ";
}
cout<<endl;
cout<<"after sorting "<<endl;

sort(v.begin(),v.end());//sorting in increasing order
for(int i=0; i<v.size();i++){
    cout<<v[i]<<" ";
}
}
