#include<iostream>

/*8. Write a program to delete an element from a user entered array. 
Accept position of element to be deleted from user.
*/
using namespace std;

int main()
{
	int i,j,n;
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
	cout<<"Enter the  Position to Be Deleted"<<endl;
	cin>>pos;
	for(i=pos;i<n;i++)
	{
		arr[i]=arr[i+1];
	}
	n--;
	cout<<"Element In Array"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" "<<endl;
	}
	
	
}
