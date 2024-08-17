#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>v;
int n;
cout<<"enter the size of the array"<<endl;
cin>>n;
cout<<endl;
cout<<"enter elements:"<<endl;
for(int i=0;i<n;i++){
    int a;
    cin>>a;
v.push_back(a);
}
cout<<"enter the three element you wants to insert in first, middle and last position respectively: "<<endl;
int n1,n2,n3;
cin>>n1>>n2>>n3;
v.insert(v.begin(),n1);
v.insert(v.begin()+3,n2);
v.insert(v.end(),n3);
cout<<"after inserting the array is: "<<endl;
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
}