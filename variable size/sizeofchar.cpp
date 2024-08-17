#include<iostream>
using namespace std;
int main(){
   int t;
   cin>>t;
   string s;
   char ch;
   while(t--){
    cin>>s;
    cin>>ch;
    for(int i=0;i<s.size();i++){
      string s1;
        if(i==s.size()-1) {
            s1.push_back(ch);
            break;
        }
      s1.push_back(s[i]);
        if(s[i]==s[i+1]) s1.push_back(ch);

        cout<<s1<<endl;
    }
    
   }
   

}