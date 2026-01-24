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
};

int main(){
    //initializing linked list
    linkedlist ll;
    
}