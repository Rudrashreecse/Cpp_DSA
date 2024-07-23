#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>v;
int n;
cout<<"enter the size of the array: ";
cin>>n;
cout<<"enter the element of the array: "<<endl;
for(int i=0;i<=(n-1);i++){
int x;    
cin>>x;
v.push_back(x);
}
vector<int>q;
for(int i=(n-1);i>=0;i--){
    int y;
    y=v[i];
    q.push_back(y);
}
for(int i=0;i<q.size();i++){
    cout<<q[i]<<" ";
}
}