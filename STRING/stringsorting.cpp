#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){ 
string s;
cout<<"enter the name: "<<endl;
getline(cin,s);
cout<<endl;
stringstream ss(s);
string temp;
vector<string>v;
while(ss>>temp){
v.push_back(temp);
}
cout<<"the vector is: "<<endl;
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
cout<<endl;
sort(v.begin(),v.end());
cout<<"after sorting: ";
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}

}