/*20. Overload function “Add” to add two integers, floats and doubles.*/

#include<iostream>
using namespace std;
int add(int &,int &);
float add(float &,float &);
double add(double &,double &);
int main()
{
	int a,b;
	float c,d;
	double e,f;	
	
	cout<<"Enter the two number a and b:"<<endl;
	cin>>a;
	cin>>b;
	add(a,b);
	cout<<"Integer addition: "<<add(a,b)<<endl;
	cout<<"Enter the two float number a and b:"<<endl;
	cin>>c;
	cin>>d;
	add(c,d);
	cout<<"Float addition: "<<add(c,d)<<endl;
	cout<<"Enter the two double number a and b:"<<endl;
	cin>>e;
	cin>>f;
	add(e,f);
	cout<<"Double addition: "<<add(e,f)<<endl;


	return 0;	
}
int add(int &a,int &b)
{
	return a+b;
}
float add(float &a,float &b)
{
	return a+b;
}
double add(double &a,double &b)
{
	return a+b;
}
