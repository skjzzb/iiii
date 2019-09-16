/*
33. Write a template function “Sort” to sort data of any kind. e. g. int, char, float, double
*/

#include<iostream>
using namespace std;

template<typename U,typename T>
T bubblesort(U n,T a[])
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=n-1;j>i;j--)
		{
			if(a[j]<a[j-1])
			{
				swap(a[j],a[j-1]);
			}
		}
	}
	
	
}
template<typename T>
void swap(T a,T b)
{
	a=a+b;
	b=a-b;
	a=a-b;
//	printf(" a=%d and b=%d",a,b);
}
 
 //template <typename T>
 int main()
 {
 	
 	int n=5;
    int a[5]={20,40,10,60,80};
 	char aa[5]={'v','c','h','z','g'};
 	
 	double arr[5]={2.5,5.7,1.3,6.9,8.1};
 	
 	
 	bubblesort(n,a);
    bubblesort(n,arr);
    bubblesort(n,aa);
 	cout<<"Integer array"<<endl;
 	for(int i=0;i<n;i++)
 	{
 		cout<<" "<<a[i]<<"\t";
	}
	cout<<endl;
	
	cout<<"Double array"<<endl;

	for(int i=0;i<n;i++)
 	{
 		cout<<" "<<arr[i]<<"\t";
	}
	cout<<endl;
	cout<<"Char array"<<endl;

	for(int i=0;i<n;i++)
 	{
 		cout<<" "<<aa[i]<<"\t";
	}
	 
	 
	 return 0;
 }
