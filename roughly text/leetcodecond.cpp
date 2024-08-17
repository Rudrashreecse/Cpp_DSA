#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
vector< vector<int> > v;
v = {{-2},{-3,-2,1}};
int max=INT_MIN;
int min = INT_MAX;
int m= v.size();
int ind;
vector<int>v1;
for(int i=0;i<m;i++){
   if(v[i][0]<=min) {
   min=v[i][0];
   v1.push_back(i);
   }
}
for(int i=0;i<m;i++){
if(i!=ind){
   if(v[i][v[i].size()-1]>=max) {
   max = v[i][v[i].size()-1];
   }

}
}
cout<<"min is:"<<min<<endl;
cout<<"max is:"<<max<<endl;
}