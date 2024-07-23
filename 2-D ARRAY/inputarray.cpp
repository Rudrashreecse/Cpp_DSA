#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter no. of Rows: ";
    cin>>m;
    cout<<"enter no. of columns: ";
    cin>>n;
int arr[m][n];
cout<<"enter the element of the array: ";
 for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
    }
    cout<<endl;
 }
 cout<<"The array is: "<<endl;
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
 }


}