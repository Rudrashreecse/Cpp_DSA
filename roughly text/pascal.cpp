#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector< vector<int> > v;
    int n;
    cout<<"enter the no of line: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        vector<int>a(i);
        v.push_back(a);
    }
    for(int i=0;i<v.size();i++){
        for(int j=0;j<=i;j++){
            if(j==0||j==i) v[i][j]=1;
            else v[i][j]=v[i-1][j]+v[i-1][j-1];
        }
    }
    cout<<"the genereted pascal triangle is: "<<endl;
    for(int i=0;i<v.size();i++){
        for(int j=0;j<=i;j++){
            cout<<v[i][j]<<" ";
        }
       cout<<endl;
    }
}