#include<iostream>
using namespace std;
int main(){
 cout<<"Enter any charater: ";
char x;
cin>>x;
int y=(int)x;
if((y>=65&&y<=90)||(y>=97&&y<=122)){

cout<<"charater is alphabate";

}
else
cout<<"charater is not alphabate";
}