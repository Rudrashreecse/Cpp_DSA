#include<iostream>
using namespace std;
int power(int a, int b){
    if(a==0&&b==0) return -1000;
    if(b==0) return 1;
    
  return a*power(a,b-1);
}
int main(){
int x,y;
cin>>x>>y;
cout<<power(x,y);
}