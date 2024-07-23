#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){ 
string s="rudrashree nayak";

int n = s.length();//lenhth of a string 
reverse(s.begin(),s.end());
cout<<s;
}