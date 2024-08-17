#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
vector< vector<int> > v;
v = {{1,2,3},{4,6},{0,2,7}};
int max=INT_MIN;
int min = INT_MAX;
int m= v.size();
int ind;
for(int i=0;i<m;i++){
   if(v[i][0]<=min) {
   min=v[i][0];
   ind = i;
   }
}
for(int i=0;i<m;i++){
if(i!=ind){
   if(v[i][v[i].size()-1]>=max) {
   max = v[i][v[i].size()-1];
   }

}
}
cout<<"max is:"<<max;
}