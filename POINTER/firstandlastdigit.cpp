#include<iostream>
using namespace std;

void find(int x, int * p1, int * p2){
*p2 = (x%10);
while(x>9){
x/=10;
}
*p1=x;
return;
}


int main(){
int n;
cout<<"enter the number: ";
cin>>n;
int firstdigits,lastdigits;
int* p1=&firstdigits;//p1 hold address of firstdigits variable 
int* p2=&lastdigits;//p2 hold address of lastdigits variable
find(n,p1,p2);
cout<<"first digit is: "<<firstdigits<<endl;
cout<<"last digit is: "<<lastdigits;


}