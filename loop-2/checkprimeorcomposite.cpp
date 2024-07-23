#include<iostream>
using namespace std;
int main(){
    int n,a=0;
    cout<<"enter the number ";
    cin>>n; 
for(int i=2;i<=(n-1);i++){
if(n%i==0){

a++;
}
}
if(a==0){
    cout<<"input number is prime ";
}
else{
   cout<<"input number is composite";
}
}