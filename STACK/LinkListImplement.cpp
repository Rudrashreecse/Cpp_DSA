#include<bits/stdc++.h>
using namespace std;
//linked list implementation of stack
class Node{
    public:
    Node* next;
    int val;
    Node(int val){
        next=nullptr;
        this->val = val;
    }
};

class mystack{
    public:
    Node* head;
    int sz;
    mystack(){
        sz=0;
        head=NULL;
    }

    //basically it is insert at head in linked list
    void push(int val){
        Node* temp = new Node(val);
        temp->next= head;
        head=temp;
        sz++;
    }

    //basically it is delete at head
    void pop(){
        if(sz==0) {
            cout<<"stack is empty!(stack underflow)!"<<endl;
        }
        Node* temp=head->next;
        head->next=NULL;
        head = temp;
        sz--;
    }

    int top(){
        if(sz==0){
            cout<<"stack is empty!";
            return -1;
        }
        return head->val;
    }

    int size(){
        return sz;
    }

    void display(){
        if(sz==0){
            cout<<"stack is empty!"<<endl;
            return;
        }
        Node* temp = head;
        while(temp){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};

int main(){
    mystack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.display();
    cout<<st.size()<<endl;
    st.pop();
    st.display();
    cout<<st.size()<<endl;

}