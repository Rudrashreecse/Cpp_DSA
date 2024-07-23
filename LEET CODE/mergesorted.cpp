#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void merge(vector<int>&v,vector<int>&v1,vector<int>&v2){
   
   int i=0, j=0, k=0;
   while(i<v1.size()){
v[k]=v1[i];
i++;
k++;
   }
   while(j<v2.size()){
v[k]=v2[j];
j++;
k++;
   }
}
void mergesorted(vector<int>&v){
    int n=v.size();
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(v[i]>v[j]) swap(v[i],v[j]);
    }
}


}
int main(){
vector<int>v1={1,4,5,8};
vector<int>v2={2,3,9,6,7,10,11};
int n=v1.size()+v2.size();
vector<int>v(n);
cout<<"v-1 is:  "<<endl;
for(int i=0; i<v1.size();i++){
    cout<<v1.at(i)<<" ";
}
cout<<endl;
cout<<"v-2 is:  "<<endl;
for(int i=0; i<v2.size();i++){
    cout<<v2.at(i)<<" ";
}
cout<<endl;
cout<<"merge vector is: "<<endl;
merge(v,v1,v2);
for(int i=0; i<v.size();i++){
    cout<<v[i]<<" ";
}
cout<<endl;
cout<<"after sorted the vector is: "<<endl;
mergesorted(v);
for(int i=0; i<v.size();i++){
    cout<<v[i]<<" ";
}
}
