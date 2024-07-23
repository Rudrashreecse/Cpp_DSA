#include<iostream>
using namespace std;/* 1 //pascal triangle---every element of pascal triangle is iCj
                                                                                   
                      1 1
                      1 2 1
                      1 3 3 1
                      1 4 6 4 1
                      1 5 10 5 5 1*/
int main(){
    int n;
cout<<"enter the value of n: ";
cin>>n;
cout<<"pascal tringle is :"<<endl;
for(int i=0;i<=n;i++){
    int prev=1;
    for(int j=0;j<=i;j++){  
        cout<<prev<<" ";
     prev= prev*(i-j)/(j+1);
     
    }
    cout<<endl;
}
}