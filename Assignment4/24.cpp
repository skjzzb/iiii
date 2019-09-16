/*
24. Write a class Array which will store integer elements in dynamically allocated space. 
		class Array
		{
			int size;
			int *arr;
		}
	Provide below functions in Array class - 
	  1. Default constructor - Take 5 as default size. Initialize the Array elements to 0
	  2. Parameterized constructor - Takes size as parameter. Initialize the Array elements to 0.
	  3. Copy constructor - Performs deep copy of Array object.
	  4. Destructor - Deletes memory which is allocated dynamically.

*/
#include<iostream>
#include<cstring>
using namespace std;


class Array
		{
			int size;
			int *arr;
			
		public: Array();
				Array(int);
				Array(Array &);
				void accept();
				void display();
				~Array();
		};
Array::Array()
{
	size=5;
	int i;
	arr=new int[size];
	for(i=0;i<size;i++)
	{
		arr[i]=0;
	}
}
Array::Array(Array &x)
{
	size=x.size;
	int i;
	arr=new int[size];
	for(i=0;i<size;i++)
	{
		arr[i]=x.arr[i];
		
	}
	cout<<"Deep copy performed by destructor"<<endl;
}


Array::Array(int s)
{
	int i;
	size=s;
	arr=new int[size];
	for(i=0;i<size;i++)
	{
		arr[i]=0;
	}
	cout<<"Parameterized constructor"<<endl;
}
void Array::accept()
{
	int i;
	cout<<"Enter the 5 elements"<<endl;
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	
}

void Array::display()
{	
	int i;
	for(i=0;i<size;i++)
	{
		cout<<arr[i]<<endl;
	}
	cout<<endl;
	
}
Array::~Array()
{
	
	cout<<"Deep copy performed by destructor"<<endl;
	delete []arr;
	
}
int main()
{
	
	Array a1(3);
	a1.accept();
	
	a1.display();
	Array a3(a1);
	a3.display();
	
	
	


}
