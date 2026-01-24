#include<bits/stdc++.h>
using namespace std;
// it display int the order of LIF0
void reversedisplay(stack<int>st){
    if(st.size()==0)  return;
    cout<<st.top()<<" ";
    st.pop();
    reversedisplay(st);
}
int main(){
    stack<int>st;
    int s;
    cout<<"enter stack size:";
    cin>>s;

    cout<<"enter stack element:";
    for(int i =0;i<s;i++){
        int el;
        cin>>el;
        st.push(el);
    }
    cout<<"recursive LIFO display:";
    reversedisplay(st);
    cout<<endl;
    cout<<"stack size:"<<st.size();

}