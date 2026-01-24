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
    // insert at tail or push at back in dequeue
    void push_back(int val){
        Node* temp = new Node(val);
        if(size == 0) head = tail = temp;
        else {
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
        size++;
    }
    // insert at head or push at front in dequeue
    void push_front(int val){
        Node* temp = new Node(val);
        if(size == 0) head = tail = temp;
        else {
            temp->next = head;
            head->prev = temp;
            head = temp;
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
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout <<endl;
    }
    // delete at head or pop at front in dequeue
    void pop_front(){
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
    // delete at tail or pop at back in dequeue
    void pop_back(){
        if(size == 0){
            cout << "can't delete! linked list is empty:";
            return;
        }
        if(head == tail){
            pop_front();
            return;
        }
        Node* temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        delete temp;
        size--;
    }
    int front() {
        if(size == 0) {
            cout << "deque is empty\n";
            return -1;
        }
        return head->val;
    }

    int back() {
        if(size == 0) {
            cout << "deque is empty\n";
            return -1;
        }
        return tail->val;
    }
    bool empty() {
        return size == 0;
    }

    int getSize() {
        return size;
    }
    
};

int main(){
    linkedlist dq;

    dq.push_back(10);
    dq.push_front(20);
    dq.push_back(30);
    dq.push_front(40);

    dq.display(); // 40 20 10 30

    cout << "Front: " << dq.front() << endl; // 40
    cout << "Back: " << dq.back() << endl;   // 30

    dq.pop_front();
    dq.pop_back();
    dq.display(); // 20 10

    cout << "Size: " << dq.getSize() << endl; // 2
}