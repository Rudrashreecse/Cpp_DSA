#include<iostream>
#include<string>
using namespace std;
int main(){
string s= "7868190130M7522";
string s1= s.substr(11,12);
int n= stoi(s1);
cout<<n;
}