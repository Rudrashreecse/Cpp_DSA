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

void display(Node* head){
    Node* temp = head;
    if(temp->next == NULL){
        cout << temp->val;
        return;
    }
    while(temp->next != NULL){
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << temp->val; // Print the last node value
}

// Display in reverse for doubly linked list
void displayReverse(Node* tail){
    Node* temp = tail;
    while(temp->prev != NULL){
        cout << temp->val << "<-";
        temp = temp->prev;
    }
    cout << temp->val;
}

int main(){
    Node a(5);
    Node b(6);    
    Node c(7);    
    Node d(8);    
    Node e(9);    
    a.next = &b; b.prev = &a;
    b.next = &c; c.prev = &b;
    c.next = &d; d.prev = &c;
    d.next = &e; e.prev = &d;
    display(&a);
    cout << endl;
    displayReverse(&e);
}