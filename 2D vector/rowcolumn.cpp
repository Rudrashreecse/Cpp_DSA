#include<iostream>
#include<vector>
using namespace std;
int main(){
vector< vector<int> > v;
v = {{1,2,3},{4,5},{1,2,3}};
cout<<"row no is:";
int m = v.size();//row no
cout<<endl;
cout<<"no of element in each row is:"<<endl;
for(int i=0;i<m;i++){
    cout<<v[i].size()<<endl;// no of element in each row
}
cout<<"last element of each row is:"<<endl;
for(int i=0;i<m;i++){
   cout<<v[i][v[i].size()-1]<<endl;
}
}