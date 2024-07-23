#include<iostream>
#include<string>
using namespace std;
int main(){ // check number of vowel of a user input name  name 
string s;
cout<<"enter the name: "<<endl;
getline(cin,s);
int count=0;
int i=0;
while(s[i]!='\0'){
if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') count ++;
i++;
}
cout<<"no. of vowel are: "<<count;
}