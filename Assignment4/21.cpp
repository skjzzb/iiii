/*21. Write a single function “Multiply” to multiply two or three or 
four integers passed depending on call.
Use default value arguments.*/

#include<iostream>
using namespace std;
int multiply(int ,int ,int , int);
int main()
{
	int a,b,c,d;
		
	
	cout<<"Enter the numbers (min 2/max 4)"<<endl;
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>d;
	
	cout<<"Multiplication: "<<multiply(a,b,c,d)<<endl;
	


	return 0;	
}
int multiply(int a=1,int b=1,int c=1, int d=1)
{
	return a*b*c*d;
}
