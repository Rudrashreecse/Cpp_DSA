#include<iostream>
#include<math.h>
using namespace std;
int main(){
int n;//print GP - 1,2,4,8.....n-term
cin>>n;
for(int i=1;i<=n;i++){
    int a=1*pow(2,i-1);
    cout<<a<<endl;
}
}