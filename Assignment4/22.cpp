/*
22. Implement class Complex with real (int) and imaginary (int) parts 
as data members of class. Implement below functions inside this class.
default constructor, parameterized constructor, getter functions 
for real and imaginary parts, setter functions for real and imaginary parts, 
display function.
*/
#include<iostream>
#include<cstring>
using namespace std;


class Complex
	{
		int img;
		int real;
		
	public:
		
		Complex();
		Complex(int,int);
		void setReal(int);
		int getReal();
		void setImaginary(int);
		int getImaginary();
		void Display();
	
	};
Complex::Complex()
{
	img=0;
	real=0;
	//cout<<real<<"+"<<img<<"i"<<"\t Deafult constructor"<<endl;
}
Complex::Complex(int r,int i)
{
	img=i;
	real=r;
}
void Complex::setReal(int rl)
{
	real=rl;

}
int Complex::getReal()
{
	
	
	return real;
	
}
void Complex::setImaginary(int im)
{
	img=im;

}
int Complex::getImaginary()
{
	
	return img;
	
}

void Complex::Display()
{
	cout<<real<<"+"<<img<<"i"<<"\t Display function"<<endl;

}

int main()
{
	int rl,im;
	Complex c1;

	Complex c3(20,30);
	c3.Display();
	
	Complex c2,c4;
	
	int r,i;
	cout<<"Enter real and img value for get function"<<endl;
	cin>>r>>i;
	c4.setReal(r);
	c4.setImaginary(i);
	c4.getReal();
	c4.Display();
	c4.getImaginary();
	c4.Display();
	
	

}
