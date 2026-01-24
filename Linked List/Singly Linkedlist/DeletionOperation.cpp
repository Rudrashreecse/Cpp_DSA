#include<iostream>
using namespace std;
class Node{
public:
Node*next;
int val;
Node(int val){
    this->val = val;
    this->next= NULL;
}
};
class linkedlist{
public:
Node* head;
Node * tail;
int size;
linkedlist(){
    head = NULL;
    tail= NULL;
    size = 0;
}
// INSERTION START HERE
void insertAtTail(int val){
    Node* temp = new Node(val);
    if(size==0) head = tail = temp;
    else {
        tail->next= temp;
        tail = temp;
    }
    size++;
}
void insertAtHead(int val){
    Node* temp = new Node(val);
    if(size==0) head = tail = temp;
    else {
        temp->next= head;
        head = temp;
    }
    size++;
}
void insertAtindex(int idx, int val){
    if(idx==0) insertAtHead(val);
    else if(idx==size) insertAtTail(val);
    else {
    Node* t = new Node(val);
    Node* temp = head;
    for(int i =0;i<idx-1;i++){
     temp=temp->next;
    }
    t->next=temp->next;
    temp->next=t;
    }
     size++;
}
    void display(){
        if(size==0){
            cout<<"linked list is empty";
            return;
        }
        Node* temp= head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp=temp->next;
        }
        cout<<"NULL";
    }
    //deletion operation
    void deleteathead(){
        if(size==0){
            cout<<"can't delete! linked list is empty:";
            return;
        }
        Node* temp=head;
        head=head->next;
        delete temp;
        size--;
    }
    void deleteattail(){
        if(size==0){
            cout<<"can't delete! linked list is empty:";
            return;
        }
        Node * temp = head;
        if(temp->next==NULL){
            deleteathead();
            return;
        }
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        temp->next=NULL;
        tail=temp;
        size--;
    }
    void deleteatidx(int idx){
        if(idx==0) {
            deleteathead();
        }
        else if(idx==size){
            deleteattail();
        }
        else{
            Node*temp = head;
            for(int i=0;i<idx-1;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
        }
    }
};
int main(){
//initializing linked list
linkedlist ll;
int s;
cout<<"enter the linked list size:";
cin>>s;
int el;
cout<<"enter the element:";
for(int i=0;i<s;i++){
    cin>>el;
    ll.insertAtTail(el);
}
cout<<"the linked list is:";
ll.display();
cout<<endl;
int idx;
cout<<"enter the index you want to delete:";
cin>>idx;
ll.deleteatidx(idx);
ll.display();
}