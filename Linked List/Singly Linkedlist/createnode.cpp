#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
void display(Node* head){
    Node*temp=head;
    if(temp->next==NULL){
        cout<<temp->val;
        return;
    }
    while(temp->next!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
}
int main(){
    Node a(5);
    Node b(6);    
    Node c(7);    
    Node d(8);    
    Node e(9);    
    a.next=&b;
    b.next=&c;
    c.next=&d;
    d.next=&e;
    display(&a);
    
}