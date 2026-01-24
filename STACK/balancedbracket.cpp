#include<bits/stdc++.h>
using namespace std;
bool check(string s){
    stack<char>st;
    for(int i=0;i<s.length();i++){
        if(s[i]=='(') st.push(s[i]);
        else if(s[i]==')'){
            if(st.size()==0) return false;
            else st.pop();
        }
        else {
            cout<<"invalid string fromat!";
            return false;
        }
    }
    if(st.size()==0) return true;
    return false;
}
int main(){
    string s;
    cout<<"enter a string to check balanced bracket:";
    cin>>s;
    if(check(s)) cout<<"It is balanced Bracket";
    else cout<<"it is imbalanced bracket";
}
