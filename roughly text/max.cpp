#include<iostream>
#include<climits>
using namespace std;
int main(){
int x,Y;
x=INT_MIN;

Y=INT_MAX;
int z=min(x,Y);
int a=max(x,Y);
cout<<x<<" "<<Y<<endl;
cout<<z<<endl;
cout<<a;
}