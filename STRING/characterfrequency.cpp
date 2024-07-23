#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
 string s="rudrashree nayak"; //ASCII 97 to 122 
 vector<int>v(26,0);// index 0 to 25
 for(int i=0;i<s.length();i++){
   int ch=s[i];
   int ascii = (int)ch;
   v[ascii-97]++;
 }
 int max=0;
 for(int i=0;i<26;i++){
if(v[i]>=max) max = v[i];
 
 }
 for(int i=0;i<26;i++){
    if(v[i]==max) {
        char ch = (char)(i+97);
        cout<<ch<<" "<<max<<endl;
    }

 }

}