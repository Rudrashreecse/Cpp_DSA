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
//transpose
cout<<endl;
int trans[n][m];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        trans[i][j]=arr[j][i];
    }
    cout<<endl;
}
cout<<"transpose matrix is: "<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<trans[i][j]<<" ";
    }
    cout<<endl;
 }
}