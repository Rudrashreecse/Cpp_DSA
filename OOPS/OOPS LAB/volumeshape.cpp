#include<iostream>
using namespace std;
class objectshape{
public:
    void volume(float r){
        cout<<"volume of sphere is:"<<4/3*(3.141)*r*r*r<<"cube unit"<<endl;
    }
     void volume(float h, float r){
        cout<<"volume of cyllinder  is:"<<(3.141)*r*r*h<<"cube unit"<<endl;
    }
 void volume(int a){
        cout<<"volume of cube is:"<<a*a*a<<"cube unit"<<endl;
 }

};

int main(){
char ch;
objectshape sphere;
 objectshape cyllinder;
 objectshape cube;
cout<<"There are three shape given below: "<<endl;
cout<<"A-sphere"<<endl;
cout<<"B-cyllinder"<<endl;
cout<<"C-cube"<<endl;
cout<<"enter the corresponding alphabate of shape to get this area:";
cin>>ch;
switch(ch){
case 'A':
float r_sphere;
cout<<"enter radius of sphere:";
cin>>r_sphere;
sphere.volume(r_sphere);
break;
case 'B':
float r_cyl,h;
cout<<"enter radius and height of cyllinder:";
cin>>r_cyl>>h;
cyllinder.volume(h,r_cyl);
break;
case 'C':
int a;
cout<<"enter any side of cube:";
cin>>a;
sphere.volume(a);
break;
default:
cout<<"we cann't proceed";
break;
}
return 0;
}