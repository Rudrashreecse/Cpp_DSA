#include<bits/stdc++.h>
using namespace std;
//reverse order display using recursion
void reorder(queue<int>q){
    stack<int>st;
    int s = q.size();
    int count=1;
    while(count<=s){
        if(count>=s/2 + 1){
            st.push(q.front());
            q.pop();
        }
        else{
            q.push(q.front());
            q.pop();
        }
        count++;
    }
    while(st.size()){
        q.push(st.top());
        st.pop();
    }
    count=1;
    while(count<=s){
        if(count>=s/2 + 1){
            st.push(q.front());
            q.pop();
        }
        else{
            q.push(q.front());
            q.pop();
        }
        count++;
    }
    while(st.size()){
        q.push(q.front());
        q.push(st.top());
        q.pop();
        st.pop();
    }
    cout<<endl;
    while(q.size()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}
int main(){
    queue<int>q;
    int size;
    cout<<"enter how many elements you want to push in queue:";
    cin>>size;
    cout<<"enter elements:";
    for(int i=0;i<size;i++){
        int el;
        cin>>el;
        q.push(el);
    }
    queue<int>temp=q;
    cout<<"\ndisplay in inserted order:"<<endl;
    while(temp.size()){
        cout<<temp.front()<<" ";
        temp.pop();
    }
    cout<<"\nafter reorder the queue:\n"<<endl;
    reorder(q);
}