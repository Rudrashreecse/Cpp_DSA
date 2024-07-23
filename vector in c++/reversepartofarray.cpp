#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void reversepart(int i, int j, vector<int>&v){
    int temp;
    while(i<j){
        temp=v[i];
    v[i]=v[j];
    v[j]=temp;
    i++;
    j--;
    }
}



int main(){
vector<int>v={1,2,3,4,5,6};

cout<<"the vector is "<<endl;
for(int i=0; i<=5;i++){
    cout<<v.at(i)<<" ";
}
cout<<endl;
cout<<"after reverse the part the array is : "<<endl;
reversepart(1,4,v);
for(int i=0; i<=5;i++){
    cout<<v.at(i)<<" ";
}


}
