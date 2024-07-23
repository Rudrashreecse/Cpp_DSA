#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter th value of n ";
cin>>n;
int a=1;
int b=n-1;;
for(int i=1;i<=2*n-1;i++){
    for(int k=1;k<=b;k++){
        
        cout<<" ";
        
    }
    if(i<=n-1) b--;
    else b++;
for(int j=1;j<=a;j++){
   cout<<"*";
}
if(i<=n-1) a+=2;
else
a=a-2;
cout<<endl;
}

}