#include<bits/stdc++.h>
using namespace std;
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
    cout<<"\noriginal queue:"<<endl;
    while(temp.size()){
        cout<<temp.front()<<" ";
        temp.pop();
    }

    // modify the original queue in reverse order then we required a stack
    stack<int>st;
    //step-1 push alla element from queue to stack and also queue became empty after this
    while(q.size()){
        st.push(q.front());
        q.pop();
    }
    //step-2 reload all element from stack to queue so that the queue became reverse
    while(st.size()){
        q.push(st.top());
        st.pop();
    }
    // now display the reverse queue
    cout<<"\nafter reverse the orinal queue:\n";
    while(q.size()){
        cout<<q.front()<<" ";
        q.pop();
    }
}