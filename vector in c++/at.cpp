#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>v(5);
cout<<"enter the elemet of vector "<<endl;
for(int i=0; i<=4;i++){
    cin>>v[i];
}
cout<<"the vector is ";
for(int i=0; i<=4;i++){
    cout<<v[i]<<" ";
}
cout<<endl;
v.at(3)=8;//it update the 3rd index value 
cout<<v.at(3)<<endl;// it also help to print the 3rd index value
cout<<"Updated vector is ";
for(int i=0; i<=4;i++){
    cout<<v[i]<<" ";
}

}