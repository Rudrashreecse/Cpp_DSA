#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>v;
v.push_back(8);// size - 1, capacity - 1 
cout<<v.capacity()<<endl;
v.push_back(5);// 2 2 
cout<<v.capacity()<<endl;
v.push_back(3);// 3 4
cout<<v.capacity()<<endl;

}