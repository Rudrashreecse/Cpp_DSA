#include<iostream>
using namespace std;
int main(){
cout<<"enter month no: ";
int x;
cin>>x;//1,3,5,7,9,11 -31days  4,6,8,10,12-30 days
switch((x>=1&&x<=12)&&x%2!=0 ){
case 1:
cout<<"no of days is 31";
break;
}
switch((x>=1&&x<=12)&&(x%2==0) ){
case 2:
cout<<"no of days is 30";
break;
}
switch(x==2){
case 3:
cout<<"no of days is 28";
break;
}
}
