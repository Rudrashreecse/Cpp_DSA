#include<iostream>
using namespace std;

int HCF(int x, int y){
int n;
if(x>=y) n=y;
else n=x;
int hcf;
for(int i=1;i<=n;i++){
    
    if(x%i==0&&y%i==0) hcf=i;
    
}
return hcf;
}

int main(){
int a,b;
cout<<"enter two number: ";
cin>>a>>b;
cout<<"HCF is "<<HCF(a,b);
}