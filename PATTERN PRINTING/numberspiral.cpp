#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter th value of n ";
cin>>n;

for(int i=1;i<=2*n-1;i++){
    
for(int j=1;j<=2*n-1;j++){
   if(i==1||i==n||j==1||j==n) cout<<n;
   else n--;

}

cout<<endl;
}

}