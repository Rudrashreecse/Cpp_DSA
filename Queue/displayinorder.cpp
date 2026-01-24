#include<bits/stdc++.h>
using namespace std;
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
    cout<<"display in inserted order:"<<endl;
    while(q.size()){
        cout<<q.front()<<" ";
        q.pop();
    }
    // after this the queue became empty 
}