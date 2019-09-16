/*19. Implement function “Swap” to swap to integers. Use call by reference.*/

#include<iostream>
using namespace std;
void swap(int &,int &);
int main()
{
	int a,b;
		
	
	cout<<"Enter the two number a and b:"<<endl;
	cin>>a;
	cin>>b;
	swap(a,b);
	cout<<"Swapped a: "<<a<<"\tb: "<<b<<endl;
	


	return 0;	
}
void swap(int &a,int &b)
{
	a= a + b;
	b= a - b;
	a= a - b;
}
