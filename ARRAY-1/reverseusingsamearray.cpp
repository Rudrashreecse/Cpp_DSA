#include<iostream>
using namespace std;
// void swap1(int *x, int *y){
//     int *z;
//     *z=*x;
//     *x=*y;
//     *y=*z;
// }
int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
int arr[n];
cout<<"enter the element of array:"<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<(n-1)/2;i++){
    // swap1(&arr[i],&arr[n-1-i]);
    int z;
    z=arr[i];
    arr[i] = arr[n-1-i];
    arr[n-1-i] = z;
}
cout<<endl;
cout<<"after reverse the array:";
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}