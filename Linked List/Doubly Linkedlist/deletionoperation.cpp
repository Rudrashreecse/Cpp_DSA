#include<iostream>
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
    // INSERTION START HERE
    void insertAtTail(int val){
        Node* temp = new Node(val);
        if(size == 0) head = tail = temp;
        else {
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
        size++;
    }
    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size == 0) head = tail = temp;
        else {
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        size++;
    }
    void insertAtindex(int idx, int val){
        if(idx == 0) insertAtHead(val);
        else if(idx == size) insertAtTail(val);
        else {
            Node* t = new Node(val);
            Node* temp = head;
            for(int i = 0; i < idx - 1; i++){
                temp = temp->next;
            }
            t->next = temp->next;
            t->prev = temp;
            if(temp->next) temp->next->prev = t;
            temp->next = t;
        }
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
    //deletion operation
    void deleteathead(){
        if(size == 0){
            cout << "can't delete! linked list is empty:";
            return;
        }
        Node* temp = head;
        head = head->next;
        if(head) head->prev = NULL;
        else tail = NULL;
        delete temp;
        size--;
    }
    void deleteattail(){
        if(size == 0){
            cout << "can't delete! linked list is empty:";
            return;
        }
        if(head == tail){
            deleteathead();
            return;
        }
        Node* temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        delete temp;
        size--;
    }
    void deleteatidx(int idx){
        if(idx == 0) {
            deleteathead();
        }
        else if(idx == size - 1){
            deleteattail();
        }
        else{
            Node* temp = head;
            for(int i = 0; i < idx - 1; i++){
                temp = temp->next;
            }
            Node* delNode = temp->next;
            temp->next = delNode->next;
            if(delNode->next) delNode->next->prev = temp;
            delete delNode;
            size--;
        }
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
        ll.insertAtTail(el);
    }
    cout << "the linked list is:";
    ll.display();
    cout << endl;
    cout << "the linked list in reverse is:";
    ll.displayReverse();
    cout << endl;
    int idx;
    cout << "enter the index you want to delete:";
    cin >> idx;
    ll.deleteatidx(idx);
    cout << "after deletion the linked list is:";
    ll.display();
    cout << endl;
    cout << "after deletion the linked list in reverse is:";
    ll.displayReverse();
}