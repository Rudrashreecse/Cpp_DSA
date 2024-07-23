#include<iostream>
#include<vector>
using namespace std;
void sortedzeros(vector<int>&v){
    int i=0;
    int n=v.size();
    int j=n-1;
    
while(i<j){

if(v[i]==0) i++;
if(v[j]==0) j--;
if(i>j) break;
if(v[i]==1&&v[j]==0){
v[i]=0;
v[j]=1;
i++;
j--;
}
}
return ;
}
int main(){
vector<int>v={1,1,0,0,1,0,1,0};

cout<<"the vector is "<<endl;
for(int i=0; i<v.size();i++){
    cout<<v.at(i)<<" ";
}
cout<<endl;
cout<<"after sorting "<<endl;
sortedzeros(v);
for(int i=0;i<v.size();i++){
    cout<<v.at(i)<<" ";
}
return 0;
}
