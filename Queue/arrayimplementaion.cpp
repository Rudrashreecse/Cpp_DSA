#include<bits/stdc++.h>
using namespace std;
#define max 100
class myqueue{
    public:
    int arr[max];
    int f,b;
    myqueue(){
        f=0;
        b=0;
    }
    int size(){
        return b-f;
    }
    void push(int el){
        if(b==max){
            cout<<"queue is full!\n";
            return;
        }
        arr[b]=el;
        b++;
        
    }
    void pop(){
        if(size()==0){
            cout<<"queue is empty:\n";
            return;
        }
        f++;
    }
    int front(){
        if(size()==0) {
            cout<<"queue is empty:"<<endl;
            return -1;
        }
        return arr[f];
    }
    int back(){
        if(size()==0) {
            cout<<"queue is empty:"<<endl;
            return -1;
        }
        return arr[b-1];
    }

};
int main(){
    myqueue q;
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front: " << q.front() << endl; // 10
    cout << "Back: " << q.back() << endl;   // 30

    q.pop();
    cout << "Front after pop: " << q.front() << endl; // 20

}
