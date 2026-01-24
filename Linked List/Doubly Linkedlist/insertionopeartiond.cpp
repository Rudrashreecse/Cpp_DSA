#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node* prev; // Add previous pointer for doubly linked list
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class linkedlist{
    public:
    Node* head;
    Node* tail;
    int size;
    linkedlist(){
        head = NULL;
        tail = NULL;
        size = 0;
    }
    //all the insertion and deletion operation are done inside linkedlist class
    void insertathead(int val){
        Node* temp = new Node(val);
        if(size == 0){
            head = tail = temp;
        }
        else{
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        size++;
    }
    void insertattail(int val){
        if(size == 0) {
            insertathead(val);
            return;
        }
        Node* temp = new Node(val);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
        size++;
    }
    void insertatidx(int idx, int val){
        if(idx == 0){
            insertathead(val);
            return;
        }
        if(idx == size){
            insertattail(val);
            return;
        }
        if(idx > size) {
            cout << "index out of bound!" << endl;
            return;
        }
        int count = 0;
        Node* newnode = new Node(val);
        Node* temp = head;
        while(count < idx - 1){
            temp = temp->next;
            count++;
        }
        newnode->next = temp->next;
        newnode->prev = temp;
        if(temp->next) temp->next->prev = newnode;
        temp->next = newnode;
        size++;
    }
    void display(){
        if(size == 0){
            cout << "linked list is empty";
            return;
        }
        Node* temp = head;
        while(temp != NULL){
            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << "NULL";
    }
    void displayReverse(){
        if(size == 0){
            cout << "linked list is empty";
            return;
        }
        Node* temp = tail;
        while(temp != NULL){
            cout << temp->val << "<-";
            temp = temp->prev;
        }
        cout << "NULL";
    }
};

int main(){
    //initializing linked list
    linkedlist ll;
    int s;
    cout << "enter the linked list size:";
    cin >> s;
    int el;
    cout << "enter the element:";
    for(int i = 0; i < s; i++){
        cin >> el;
        ll.insertattail(el);
    }
    cout << "the linked list is:";
    ll.display();
    cout << endl;
    cout << "the linked list in reverse is:";
    ll.displayReverse();
    cout << endl;
    int idx, val;
    cout << "enter the value at which index you want to insert:";
    cin >> idx >> val;
    ll.insertatidx(idx, val);
    cout << "after insert the linked list became:" << endl;
    ll.display();
    cout << endl;
    cout << "after insert the linked list in reverse:" << endl;
    ll.displayReverse();
}