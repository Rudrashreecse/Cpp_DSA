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
class myqueue{
    public:
    Node* head;
    Node * tail;
    int size;
    myqueue(){
        head = NULL;
        tail= NULL;
        size = 0;
    }

    //it is insert at tail or push in queue
    void push(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else {
            tail->next= temp;
            tail = temp;
        }
        size++;
    }
    //delete at head or pop in queue
    void pop() {
        if(size==0) {
            cout << "queue is empty\n";
            return;
        }
        Node* temp = head;
        head = head->next;
        if(head == NULL) tail = NULL; // fix for last element
        delete temp;
        size--;
    }

    void display(){
        if(size==0){
            cout<<"queue is empty\n";
                return;
        }
        Node* temp= head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    int front(){
        if(size==0){
            cout<<"queue is empty\n";
            return -1;
        }
        return head->val;
    }

    int back(){
        if(size==0){
            cout<<"queue is empty\n";
            return -1;
        }
        return tail->val;
    }

    
};
int main(){
    myqueue q;
    q.push(10);
    q.push(20);
    q.push(30);

    q.display(); // 10 -> 20 -> 30 -> NULL

    cout<<"Front: "<<q.front()<<endl; // 10
    cout<<"Back: "<<q.back()<<endl;   // 30

    q.pop();
    q.display(); // 20 -> 30 -> NULL
    cout<<"Front after pop: "<<q.front()<<endl; // 20

}