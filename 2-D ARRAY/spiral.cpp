#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter no. of Rows: ";
    cin>>m;
    cout<<"enter no. of columns: ";
    cin>>n;
int arr[m][n];
cout<<"enter the element of the matrix: "<<endl;
 for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
    }
    cout<<endl;
 }
 cout<<"The Matrix is: "<<endl;
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
 }
cout<<endl;
int minr=0,minc=0;
int maxr=m-1, maxc= n-1;
while(minr<=maxr || minc<=maxc){
    //right
for(int j=minc;j<=maxc;j++){
    cout<<arr[minr][j]<<" ";
}
minr++;
if(minr>maxr||minc>maxc) break;
//down
for(int i=minr;i<=maxr;i++){
    cout<<arr[i][maxc]<<" ";
}
maxc--;
if(minr>maxr||minc>maxc) break;
//left
for(int j=maxc;j>=minc;j--){
    cout<<arr[maxr][j]<<" ";
}
maxr--;
if(minr>maxr||minc>maxc) break;
//up
for(int i=maxr;i>=minr;i--){
    cout<<arr[i][minc]<<" ";
}
minc++;

}
}// input- 1 2 3 4 5 6 7 8 9   output- 1 2 3 6 9 8 7 4 5