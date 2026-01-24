#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int>q;
    int k=3;//window size = 3
    int arr[]={-1,0,30,-5,-1,4,6,-2,5,-1};
    //ans should be -1 , -5, -5, -5, -1, -2, -2, -2 
    int n = sizeof(arr)/sizeof(arr[0]);
    //step-1 push down all -ve no to the queue
    for(int i=0;i<n;i++){
        if(arr[i]<0) q.push(i);
    }
    vector<int>ans;//to store answer
    int i=0;
    while(i+k<=n){
        while(q.size()>0 && q.front()<i) q.pop();
        if(q.size()==0 || q.front()>i+k) ans.push_back(0);
        else ans.push_back(arr[q.front()]);
        i++;
    }
    //print the input array
    cout<<"input array:";
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
    cout<<"answer are:";
    for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
    cout<<endl;
}