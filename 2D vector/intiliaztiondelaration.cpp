#include<iostream>
#include<vector>
using namespace std;
int main(){
    // declaration
 vector< vector<int> >v(4, vector<int>(3)); // row-4, column-3
// input
cout<<"enter the elemnt: "<<endl;
for(int i=0;i<v.size();i++){
for(int j=0;j<v[0].size();j++){
    cin>>v[i][j];
}
}
cout<<"the vector5 is: "<<endl;
for(int i=0;i<v.size();i++){
for(int j=0;j<v[0].size();j++){
    cout<<v[i][j]<<" ";
}
cout<<endl;
}
cout<<endl;
cout<<"no of rows="<<v.size()<<endl;
cout<<"no of column="<<v[0].size()<<endl;
}