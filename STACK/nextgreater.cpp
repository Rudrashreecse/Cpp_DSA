#include<bits/stdc++.h>
using namespace std;
vector<int> nextgreater(const vector<int>&arr){
    int size= arr.size();
    stack<int>st;
    vector<int>ans(size);
    //initilizing the last element as -1 as there are no next greater element from last element
    ans[size-1]=-1;
    st.push(arr[size-1]);
    for(int i=size-2;i>=0;i--){
        //rule- pop , ans , push
        while(!st.empty() && st.top()<=arr[i]) st.pop();
        if(st.size()==0) ans[i]=-1;
        else ans[i]=st.top();
        st.push(arr[i]);
    }
    return ans;
}
int main(){
    int s;
    cout<<"enter the size of array:";
    cin>>s;
    vector<int>arr(s);
    cout<<"enter the array element:";
    for(int i=0;i<s;i++) cin>>arr[i];
    cout<<"the next greater element array is:";
    vector<int>ans = nextgreater(arr);
    for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
    cout<<endl;
}