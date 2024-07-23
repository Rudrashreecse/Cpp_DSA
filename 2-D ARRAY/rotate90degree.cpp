#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter no. of Rows: ";
    cin>>m;
    cout<<"enter no. of columns: ";
    cin>>n;
int arr[m][n];
cout<<"enter the element of the matrix: ";
 for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
    }
    cout<<endl;
 }
 cout<<"The matrix is: "<<endl;
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
 }
 cout<<endl;

//tranpose first
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        swap(arr[i][j],arr[j][i]);
    }
 }
//the reverse the row 
for(int k=0;k<n;k++){
    int i=0;
    int j=n-1;
while(i<=j){
swap(arr[k][i],arr[k][j]);
i++;
j--;
}
}
//print the resultant matrix
cout<<endl;
cout<<"After rotating 90degree: "<<endl;
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
 }
}