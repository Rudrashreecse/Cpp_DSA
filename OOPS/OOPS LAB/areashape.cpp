#include<iostream>
using namespace std;
class objectshape{
public:
    void area(long a){
        cout<<"area of square is:"<<a*a<<"square unit"<<endl;
    }
     void area(long l, long b){
        cout<<"area of rectangle is:"<<l*b<<"square unit"<<endl;
    }
 void area(float r){
        cout<<"area of circle is::"<<(3.141)*r*r<<"square unit"<<endl;
 }
void area(float b, float h ){
        cout<<"area of triangle is::"<<(0.5)*b*h<<"square unit"<<endl;
 }
};

int main(){
char ch;
objectshape square;
objectshape rectangle;
objectshape circle;
 objectshape triangle;
 
cout<<"There are three shape given below: "<<endl;
cout<<"A-square"<<endl;
cout<<"B-rectangle"<<endl;
cout<<"C-circle"<<endl;
cout<<"D-triangle"<<endl;
cout<<"enter the corresponding alphabate of shape to get it's area:";
cin>>ch;
switch(ch){
case 'A':
long a;
cout<<"enter any side of square:";
cin>>a;
square.area(a);
break;
case 'B':
long l,b;
cout<<"enter length and breadth of rectangle:";
cin>>l>>b;
rectangle.area(l,b);
break;
case 'C':
float r;
cout<<"enter radius of circle:";
cin>>r;
circle.area(r);
break;
case 'D':
float b1,h;
cout<<"enter base and height of triangle:";
cin>>b1>>h;
triangle.area(b1,h);
break;
default:
cout<<"not found";
break;
}
return 0;
}