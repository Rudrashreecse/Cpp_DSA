#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){ 
int x = 1234567;
string s = to_string(x);//it converts integer to string
cout<<s<<endl;
cout<<s[0]<<" "<<s[1];
}