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
    queue<int>temp=q;
    cout<<"\ndisplay in inserted order:"<<endl;
    while(temp.size()){
        cout<<temp.front()<<" ";
        temp.pop();
    }
    cout<<"\nafter removing the even index element:\n"<<endl;
    for(int i=0;i<size;i++){
        if(i%2==0) q.pop();
        else{
            int x = q.front();
            q.pop();
            q.push(x);
        }
    }
    temp=q;
     while(temp.size()){
        cout<<temp.front()<<" ";
        temp.pop();
    }
}