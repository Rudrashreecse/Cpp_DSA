#include<iostream>
using namespace std;
int main(){
int arr[]={2,5,6,8,2,9,6,3,4};
int x=7;
int a,b;
for(int i=0;i<=8;i++){

for(int j=i+1;j<=8;j++){
if(arr[i]+arr[j]==7) {
a=i;
b=j;
cout<<a<<" "<<b<<endl;
}
}

}

}