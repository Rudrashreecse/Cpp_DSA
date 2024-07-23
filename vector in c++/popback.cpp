#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>v;
v.push_back(14);// size- 1 capacity- 1 
v.push_back(13);// size- 2 capacity - 2 
v.push_back(12);// 3 4 
v.push_back(11);// 4 4 
v.push_back(10);// 5 8 
v.push_back(9);// 6 8
v.push_back(8);// 7 8
v.push_back(7);// 8 8 
v.push_back(6);// 9 16
v.push_back(5);// 10 16
v.push_back(4);// 11 16
v.push_back(3);// 12 16 
v.push_back(2);// 13 16
v.push_back(1);// 14 16
cout<<v.size()<<endl;
cout<<v.capacity()<<endl;
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
// after pop_back size change but capacity remain same 
v.pop_back();//it delete the laST element 1 size-14 capacity- 16
v.pop_back();// it delete the element 2   size - 13 capacity-16
v.pop_back();// it delete the element 3   size - 12 capacity-16
v.pop_back();// it delete the element 4   size - 11 capacity-16
cout<<endl;
cout<<v.size()<<endl;
cout<<v.capacity()<<endl;
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
}