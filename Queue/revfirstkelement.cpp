#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int>q;
    int n;
    cout<<"enter how many elements you want to insert in queue:";
    cin>>n;
    cout<<"enter elements:";
    for(int i=0;i<n;i++){
        int el;
        cin>>el;
        q.push(el);
    }
    cout<<endl;
    int k;
    cout<<"enter how many elements you want to reverse starting from first:";
    cin>>k;
    if(k>q.size()){
        cout<<"you cant reverse first "<<k<<" element as the queue size is:"<<q.size()<<"\n";
        return 0;
    }
    queue<int>temp=q;
    cout<<"queue before reverse first "<<k<<" elements\n";
    while(temp.size()){
        cout<<temp.front()<<" ";
        temp.pop();
    }
    cout<<endl;
    //step-1 first insert the first k element in the stack and also delete from queue
    stack<int>st;
    for(int i=0;i<k;i++){
        st.push(q.front());
        q.pop();
    }
    //step-2 then reload from stack it automatically push into queue in reverse manner
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
    //step-3 the pop the rest n-k element and push to queue's back
    for(int i=0;i<n-k;i++){
        q.push(q.front());
        q.pop();
    }
    temp=q;
    cout<<"queue after reverse first "<<k<<" elements\n";
    while(temp.size()){
        cout<<temp.front()<<" ";
        temp.pop();
    }
    cout<<endl;
    return 0;
}