#include<bits/stdc++.h>
using namespace std;
//reverse order display using recursion
void displayreverse(queue<int>q){
    if(q.empty()) return;
    int x=q.front();
    q.pop();
    displayreverse(q);
    cout<<x<<" ";
}
int main(){
    queue<int>q;
    int size;
    cout<<"enter how many elements you want to push in queue:";
    cin>>size;
    cout<<"enter elements:";
    for(int i=0;i<size;i++){
        int el;
        cin>>el;
        q.push(el);
    }
    queue<int>temp=q;
    cout<<"\ndisplay in inserted order:"<<endl;
    while(temp.size()){
        cout<<temp.front()<<" ";
        temp.pop();
    }
    cout<<"\ndisplay in reverse order:\n"<<endl;
    displayreverse(q);
}