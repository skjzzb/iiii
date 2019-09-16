/*
26. Create objects c1,c2,c3,c4 of class Complex implemented earlier. 
Overload necessary operators to execute following statements
a. c3=c1+c2
b. c3=c1-c2
c. c2= -c1
d. c4= ++c1
e. c4=c1++
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
		Complex operator+(Complex&);
		Complex operator-(Complex&);
		Complex operator-();
		Complex operator++();
		Complex operator++(int);
				
		void display();
		
		
	};
	
Complex Complex::operator++()
{
	Complex temp;
	temp.real=++real;
	temp.img=++img;
	return temp;
	
}
Complex Complex::operator++(int)
{
	Complex temp;
	temp.real=real++;
	temp.img=img++;
	return temp;
	
}
Complex Complex::operator+(Complex &m)
{
	Complex temp;
	temp.real=real+m.real;
	temp.img=img+m.img;
	return temp;
}
Complex Complex::operator-(Complex &m)
{
	Complex temp;
	temp.real=real-m.real;
	temp.img=img-m.img;
	return temp;
}
Complex Complex::operator-()
{
	Complex temp;
	temp.real= -1*real;
	temp.img= -1*img;
	return temp;
}

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


void Complex::display()
{
	if(img>0)
	{
			cout<<real<<"+"<<img<<"i"<<endl;

	}
	else if(img==0&& real==0)
	{
			cout<<real<<"+"<<img<<"i"<<endl;
	}
	else
	{
			cout<<real<<img<<"i"<<endl;

	}

}

int main()
{

	Complex c1(2,3),c3,c4;
	Complex c2(20,30),c5(50,40);
	c3=c1+c2;
	c3.display();
	c3=c1-c2;
	c3.display();
	c2= -c5;
	c2.display();
	c4= ++c5;
	c4.display();
	c4=c5++;
	c4.display();
	
	
	return 0;

}
