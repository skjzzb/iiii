/*18. Write a program to accept marks of a student in ‘n’ subjects.
 Allocate the space for the array of marks dynamically. 
 Display average of marks. Use cin, cout, new, delete.
*/

#include<iostream>
using namespace std;

int main()
{
	int n;
	float sum,r;
	int *ptr;
	
	
	cout<<"Enter the number of subjects:"<<endl;
	cin>>n;
	
	ptr= new int[n];
	
	cout<<"Enter the marks of subjects:"<<endl;

	for(int i=0;i<n;i++)
	{
		cin>>ptr[i];
		sum=sum+ptr[i];
	}
	r=sum/n;
	cout<<"Average marks :"<<r<<endl;
	
	delete ptr;

	return 0;	
}
