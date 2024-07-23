#include<iostream>
using namespace std;
int main(){

int a[5];
int max=0;
int min;

cout<<"enter the element of array:"<<endl;
for(int i=0;i<=4;i++){
    cin>>a[i];
}
//maximum element of an array
for(int i=0;i<=4;i++){
    if(a[i]>=max) max=a[i];
    else max=max;
   
}
for(int i=0;i<=4;i++){
    if(a[i]<=a[i+1]) min = a[i];
    else min = a[i+1];
}
cout<<"maximum element is: "<<max<<endl;
cout<<"minimum element is: "<<min;
}