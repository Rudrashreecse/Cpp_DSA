#include<iostream>
using namespace std;
class player{
public:
int score;
int health;
public:
void setscore(int score){
    this-> score = score;
}

int getscore(){
    return score;
}
};
int addscore(player a, player b){// object pass as argument 
return a.getscore()+b.getscore();
}
int main(){

player rudra;// rudra naamka ek object ban gaya 
rudra.setscore(100);
cout<<"score of rudra is: "<<rudra.getscore()<<endl;
player jojo;// jojo naamka ek object ban gaya 
jojo.setscore(90);
cout<<"score of jojo is: "<<jojo.getscore()<<endl;
cout<<"sum of them score is: "<<addscore(rudra,jojo);
}