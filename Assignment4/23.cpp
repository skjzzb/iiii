/*
23. Write a program to count number of objects created for above class Complex .
Use static data member and member function.
*/
#include<iostream>
#include<cstring>
using namespace std;


class Complex
	{
		int img;
		int real;
		static int cnt;
	public:
		Complex();
		Complex(int,int);
		
		static void showcnt();
	
	};
	
int Complex::cnt;

Complex::Complex()
{
	img=0;
	real=0;
	cnt++;
	//cout<<real<<"+"<<img<<"i"<<"\t Deafult constructor"<<endl;
}
Complex::Complex(int r,int i)
{
	img=i;
	real=r;
	cnt++;
}


void Complex::showcnt()
{
	cout<<cnt<<"\t Objects created"<<endl;

}

int main()
{

	Complex c1,c2,c3;

	Complex c4(20,30);
	Complex::showcnt();
	
	return 0;

}
