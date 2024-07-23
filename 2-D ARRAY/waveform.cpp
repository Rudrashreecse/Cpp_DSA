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
 cout<<"thwe waveform element in order are: "<<endl;
for(int i=0;i<m;i++){
    
        if(i%2==0){
            for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        else {
            for(int j=(n-1);j>=0;j--){
            cout<<arr[i][j]<<" ";
            }
             cout<<endl;
        }
 
   
}

}