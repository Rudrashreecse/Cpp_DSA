#include<bits/stdc++.h>
using namespace std;
class mystack{
    public:
    int idx;
    int arr[100];

    mystack(){
        idx=-1;
    }

    void push(int el){
        if(idx == sizeof(arr)/sizeof(arr[0])-1){
            cout<<"stack overflow!";
            return;
        }
        arr[++idx]=el;
    }

    void pop(){
        if(idx==-1){
            cout<<"stack underflow!";
            return;
        }
        --idx;
    }

    int top(){
        if(idx==-1){
            cout<<"stack is empty!";
            return -1;
        }
        return arr[idx];
    }

    int size(){
        if(idx==-1) return 0;
        return idx+1;
    }

    void display(){
        if(idx==-1){
            cout<<"stack is empty!";
            return;
        }
        for(int i=idx;i>=0;i--){
            cout<<arr[i]<<" ";
        }
    }
};
int main(){
    mystack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.pop();
    cout<<st.size()<<" "<<endl;
    st.display();
    cout<<endl;
    st.push(50);
    st.push(60);
    cout<<st.size()<<" "<<endl;
    st.display();

}