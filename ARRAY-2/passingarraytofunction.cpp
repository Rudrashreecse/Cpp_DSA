#include<iostream>
using namespace std;
void display(int a[]){
for(int i=0;i<=4;i++){
    cout<<a[i]<<" ";
}
}
//change the 1st elemnt of the array
void change(int a[]){
a[0]=10;

}
int main(){
int arr[5]={4,6,8,10,12};
display(arr);
change(arr);//actually we pass the address of the element of an array into the function 
display(arr);

}