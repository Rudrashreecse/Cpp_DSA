#include<bits/stdc++.h>
using namespace std;
//empty class has 1byte storage
class person1{

};
//here there is only one integer data member so the class occupy 4byte storage
class person2{
    int x;
    int y;
};
int main(){
    cout<<sizeof(person1)<<endl;    
    cout<<sizeof(person2)<<endl;    

}