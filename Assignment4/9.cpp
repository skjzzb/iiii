/*9. Write a program to insert an element into an array. 
Accept position of element to be inserted from user*/

#include<iostream>
using namespace std;

int main()
{
	int i,j,n,ele,q,temp;
	int arr[100],pos;
	cout<<"Enter the How many Element In Array"<<endl;
	cin>>n;
	
	cout<<"Enter the  Element In Array"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Element In Array"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" "<<endl;
	}
	cout<<"Enter the element to Be Inserted"<<endl;
	cin>>ele;
	cout<<"Enter the  Position to Be Inserted"<<endl;
	cin>>pos;
	//q=n+1;
	for(i=n;i>=pos;i--)
	{
		arr[i]=arr[i-1];
		
	}
	arr[pos]=ele;
	n++;
	cout<<"Element In Array"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" "<<endl;
	}
	
	
}
