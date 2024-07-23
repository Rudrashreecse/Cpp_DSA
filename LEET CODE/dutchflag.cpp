#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void swap(vector<int>&v,int i, int j){
int temp=v[i];
v[i]=v[j];
v[j]=temp;
}
void sorted(vector<int>&v){
    int low=0;
    int mid=0;
    int high=v.size()-1;
    while(mid<=high){
   if(v[mid]==2) {
    swap(v[mid],v[high]);
    high--;
   }
else if(v[mid==0]){
    swap(v[mid],v[low]);
    low++;
    mid++;
}
else mid++;
    }
    
}
int main(){
vector<int>v={0,0,2,1,1,2};//0,0,2,1,1,2 leet code- 75 no question

cout<<"the vector is "<<endl;
for(int i=0; i<v.size();i++){
    cout<<v.at(i)<<" ";
}
cout<<endl;
cout<<"after sorting "<<endl;
sorted(v);
for(int i=0; i<v.size();i++){
    cout<<v[i]<<" ";
}
}
