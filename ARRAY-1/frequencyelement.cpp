#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
int arr[n];
cout<<"enter the element of array:"<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}

int ma=0;
for(int i=0;i<n;i++){
   ma= max(ma,arr[i]);
}
int b[ma+1]={1};
for(int i=0;i<n;i++){
    b[arr[i]]++;
}
cout<<endl;
sort(arr,arr+n);
int x;
for(int i=0;i<n;i++){
if(x!=arr[i])
 cout<<arr[i]<<"="<<b[arr[i]]<<endl;
 x= arr[i];
}
}