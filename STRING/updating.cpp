#include<iostream>
#include<string>
using namespace std;
int main(){
string s;
cout<<"enter the name: "<<endl;
getline(cin,s); // rudrashree = after updating r to s name became sudrashree
s[0]='s';
cout<<s;

}