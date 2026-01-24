#include<bits/stdc++.h>
using namespace std;
class person{
    public:
    int health;
    void sethealth(int health){
        this->health=health;\
        cout<<"adress of this ketyword->"<<this;
    }
};
int main(){
    person *p1 = new person;
    cout<<p1<<endl;
    p1->sethealth(50);

}