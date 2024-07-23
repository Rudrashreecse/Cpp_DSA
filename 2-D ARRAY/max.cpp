#include<iostream>
#include<climits>
using namespace std;
void maxi(int max,int  arr[4][4]){
   
   for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        if(arr[i][j]>max) max=arr[i][j];
    }
   }
    cout<<"max elemnt of the 2-D array is: "<<max;

}
int main(){
    int arr[4][4];
    
cout<<"enter the element of the array: ";
 for(int i=0;i<=3;i++){
    for(int j=0;j<=3;j++){
        cin>>arr[i][j];
    }
    cout<<endl;
 }
 cout<<"The array is: "<<endl;
for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
 }
 
 int max;
 max=arr[0][0];
maxi(max,arr);
}