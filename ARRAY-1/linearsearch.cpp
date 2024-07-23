#include<iostream>
using namespace std;
int main(){  //search the element x taking as input 
int x;
cout<<"enter the element which you want to search: ";
cin>>x;
int a[5]={5,7,8,3,5};
bool flag=false;
for(int i=0;i<=4;i++){
   if(a[i]==x) flag=true;
}
if(flag==true)
    cout<<"present";

else cout<<"not present";


}