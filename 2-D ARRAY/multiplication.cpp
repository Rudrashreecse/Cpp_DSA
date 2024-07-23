#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter 1st matrix row: ";
    cin>>m;
    cout<<"enter 1st matrix column: ";
    cin>>n;
    int p,q;
    cout<<"enter 2nd matrix row: ";
    cin>>p;
    cout<<"enter 2nd matrix column: ";
    cin>>q;
int a[m][n],b[p][q];
if(n==p){
  cout<<"enter the element of the 1st matrix: "<<endl;
 for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>a[i][j];
    }
 }
 cout<<"enter the element of the 2nd matrix: "<<endl;
 for(int i=0;i<p;i++){
    for(int j=0;j<q;j++){
        cin>>b[i][j];
    }
 }  
cout<<endl;
int c[m][q];
for(int i=0;i<m;i++){
for(int j=0;j<q;j++){
c[i][j]=0;
for(int k=0;k<p;k++){
    c[i][j]+=a[i][k]*b[k][j];
}
}
}
cout<<"resultant matrix is: "<<endl;
for(int i=0;i<m;i++){
for(int j=0;j<q;j++){
   cout<<c[i][j]<<" ";
}
cout<<endl;
}
}
else{
    cout<<"The two matrices can't be multiplied";
}
}