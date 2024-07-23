#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter th value of n ";
cin>>n;
for(int i=1;i<=2*n-1;i++){
    cout<<"*";
}
cout<<endl;
int a=1;
for(int i=1;i<=n;i++){

    //star
for(int j=1;j<=n-i;j++){
   cout<<"*";
}

//space

    for(int k=1;k<=a;k++){
        cout<<" ";

}
a+=2;
//star
for(int j=1;j<=n-i;j++){
   cout<<"*";
}
cout<<endl;

}
}