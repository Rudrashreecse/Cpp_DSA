#include<iostream>
using namespace std;
void print(int n){
if(n<1) return;
cout<<n<<endl;
print(n-1);
}
int main(){
int n;
cout<<"enter the no: ";
cin>>n;
print(n);

}