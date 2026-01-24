#include<bits/stdc++.h>
using namespace std;
void reversedisplay(stack<int>st){
    if(st.size()==0)  return;
    int top_el = st.top();
    st.pop();
    reversedisplay(st);
    cout<<top_el<<" ";
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
    cout<<" recursive reverse display:";
    reversedisplay(st);
    cout<<endl;
    cout<<"stack size:"<<st.size();

}