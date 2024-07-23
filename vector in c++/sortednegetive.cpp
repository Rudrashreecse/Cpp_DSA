#include<iostream>
#include<vector>
using namespace std;
void sortednegetive(vector<int>&v){
int n=v.size()-1;
int i=0;
int j=n;
while(i<j){
if(v[i]>0) i++;
if(v[j]<0) j--;
if(i>j) break;
if(v[i]<0&&v[j]>0){
    int temp;
    temp=v[i];
v[i]=v[j];
v[j]=temp;
i++;
j--;
}

}
}
int main(){
vector<int>v={-1,5,6,7,-3,-2,-6};

cout<<"the vector is "<<endl;
for(int i=0; i<v.size();i++){
    cout<<v.at(i)<<" ";
}
cout<<endl;
cout<<"after sorting "<<endl;
sortednegetive(v);
for(int i=0;i<v.size();i++){
    cout<<v.at(i)<<" ";
}
return 0;
}
