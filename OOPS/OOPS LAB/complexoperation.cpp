#include<iostream>
#include<math.h>
using namespace std;
class Complex{
	public:
		void operation(double x,double y)
{
	float mag = pow(((x*x)+(y*y)),0.5);
	cout<<"Magnitude = "<<mag;
}
void operation(int r1,int i1, int r2, int i2)
{
	float sum_r = r1+r2;
	float sum_i = i1+i2;
	cout<<"sum = "<<sum_r<<"+"<<sum_i<<"i";
}
void operation(long int r1,long int i1,long int r2,long int i2)
{
	float dif_r = r1-r2;
	float dif_i = i1-i2;
	cout<<"diff = "<<dif_r<<"-"<<dif_i<<"i";
}
};
int main()
{
	Complex cd;
	int r1,i1,x,r2,i2;
	double r,i;
	long int a,b,c,d;
	cout<<"enter choice:- \n 1. magnitude \n 2. addition \n 3. subtraction \n";
	cin>>x;
	switch(x)
	{
	      case 1: cout<<"Enter real and imaginary part of comlpex number:- \n";
		          cin>>r>>i;
	              cd.operation(r,i);
	              break;
	      case 2: cout<<"Enter real and imaginary of 1st complex:- \n";
	              cin>>r1>>i1;
	              cout<<"Enter real and imaginary of 2nd complex:- \n";
	              cin>>r2>>i2;
	              cd.operation(r1,i1,r2,i2);
	              break;
	      case 3: cout<<"Enter real and imaginary of 1st complex:- \n";
	              cin>>a>>b;
	              cout<<"Enter real and imaginary of 2nd complex:- \n";
	              cin>>c>>d;
	              cd.operation(a,b,c,d);
	              break;
	      default: cout<<"invalid";
	               break;
}
}