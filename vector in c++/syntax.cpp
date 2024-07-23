#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>v;
v.push_back(8);
cout<<v.size()<<endl;
v.push_back(5);
cout<<v.size()<<endl;
v.push_back(3);
cout<<v.size()<<endl;
cout<<v[0]<<endl;
cout<<v[1]<<endl;
cout<<v[2]<<endl;
}