#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>v(5);
cout<<"enter the elemet of vector "<<endl;
for(int i=0; i<=4;i++){
    cin>>v[i];
}

v.erase(v.begin()+1,v.begin()+4);
cout<<"the vector is ";
for(int i=0; i<v.size();i++){
    cout<<v[i]<<" ";
}
cout<<endl;
}