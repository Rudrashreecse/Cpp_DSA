#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>v;
cout<<"enter the elemet of vector "<<endl;
int x;
for(int i=0; i<=4;i++){
    
    cin>>x;
    v.push_back(x);
}
cout<<"the vector is ";
for(int i=0; i<=4;i++){
    cout<<v[i]<<" ";
}
}