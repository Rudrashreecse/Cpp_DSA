#include<iostream>
#include<string>
using namespace std;
int main(){
char str[10];
for(int i=0;i<=9;i++){
    cin>>str[i];
}
for(int i=0;str[i]!='\0';i++){
    cout<<str[i]<<" ";
}
cout<<endl;
cout<<str[0]<<endl;
cout<<str[10];
}