#include<iostream>
using namespace std;
class book{
public:

int price;
int page;
int countbook(int p){
  
if(price>=p) return 1;
else return 0; 
}

};

int main(){

book english;

english.price=1000;
cout<<english.countbook(2000);


}