#include<iostream>
#include<vector>
using namespace std;
int main(){
    // declaration
 vector< vector<int> >v(4, vector<int>(3)); // row-4, column-3, and each elemnt are 5
cout<<"enter the elemnt of vector: "<<endl;
for(int i=0;i<v.size();i++){
for(int j=0;j<v[0].size();j++){
    cin>>v[i][j];
}
cout<<endl;
}
cout<<"The vector is: "<<endl;
for(int i=0;i<v.size();i++){
for(int j=0;j<v[0].size();j++){
    cout<<v[i][j]<<" ";
}
cout<<endl;
}
cout<<endl;
cout<<"column no="<<v[0].size()<<endl; 
cout<<"row no="<<v.size(); 
}