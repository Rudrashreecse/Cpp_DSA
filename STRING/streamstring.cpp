#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){ 
string s="I am a boy of twenty tears old and now I am persuing my bachelor degree at VSSUT in second year. I am trying to placed in a good company ";
stringstream ss(s);
string temp;
vector<string>v;
while(ss>>temp){
    v.push_back(temp);
}
cout<<"now the vector became: "<<endl;
for(int i=0; i<v.size();i++){
    cout<<v[i]<<" ";
}
sort(v.begin(),v.end());
cout<<endl;
cout<<"after sorting: "<<endl;
for(int i=0; i<v.size();i++){
    cout<<v[i]<<" ";
}
int count = 1;
int max=1;
for(int i=0;i<v.size();i++){
    if(i==v.size()-1) break;
    if(v[i]==v[i+1]) count++;
    else count =1;
    if(count>=max) max = count;
}
cout<<endl;
for(int i=0;i<v.size();i++){
    if(i==v.size()-1) break;
    if(v[i]==v[i+1]) count++;
    else count =1;
    if(count==max) cout<<v[i]<<" "<<count<<endl;
}

}