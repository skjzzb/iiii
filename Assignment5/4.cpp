/*
4. Write a program to implement double ended stack.
	class Dstack
	{
		int *arr;
		int top1, top2, size;
	};
In double ended stack addition and deletion of elements take place from both ends.
 Maintain two top indicators to perform operations.*/




#include<iostream>
#define max 5
using namespace std;


class Stack
{
	int arr[max];
	int top1,top2,size;
	public:
			void push(int);
			void pop();
			void display();
			bool isEmpty();
			bool isFull() ;
			Stack();
			
};

Stack::Stack()
{
	size=max;
	arr[size];
//	arr=new arr[size];
	for(int i=0;i<size;i++)
	{
		arr[i]=0;
	}
	top1= -1;
	top2=size;
	
}
void Stack::push(int e)
{
	int z=max,x,n;
	z--;
	cout<<"push into\t1.Stack1\t2.Stack2"<<endl;
	cin>>n;
	if(n==1)
	{
		if(top1!=top2)
		{
			top1++;
			arr[top1]=e;
			cout<<e<<"<--- Is Pushed"<<endl;
	
		}
		else 
		{
			
			throw x;
			isFull();
		}
	}
	else if(n==2)
	{
		if(top2!=top1)
		{
			top2--;
			arr[top2]=e;
			cout<<e<<"<--- Is Pushed"<<endl;
	
		}
		else 
		{
			
			throw x;
			isFull();
		}
		
	}
	
}
void Stack::pop()
{	
/*	int z;
	if(top>0)
	{
		cout<<t[top]<<"<--- Is Pooped"<<endl;
		top--;	
		

	}
	else
	{
		throw z;
		isEmpty();
	}	*/
}

bool Stack :: isEmpty()
{	int c;
		cout<<"Stack underflow"<<endl;
		return 0;

}
bool Stack :: isFull()
{
	cout<<"Stack overflow"<<endl;
		return 0;
	
}
void Stack::display()
{
	int c;
	cout<<"Display:\t1.Stack1\t2.Stack2\t3.Both"<<endl;
	cin>>c;
	if(c==1)
	{
		for(int i=top1;i>=0;i--)
			{
				cout<<"Element --- >"<<arr[i]<<endl;		
			}			
	}
	else if(c==2)
	{
		for(int i=top2;i<=size-1;i++)
			{
				cout<<"Element --- >"<<arr[i]<<endl;		
			}			
	}
	else
	{
		for(int i=0;i<size-1;i++)
			{
				cout<<"Element --- >"<<arr[i]<<endl;		
			}
				
	}
	
	
	
	
}	

 int main()
 {
 	int a,e,z;
 	Stack s;
 	while(1)
 	{
 	
 		cout<<"Enter the option for stack1:\n1.Push\n2.Pop\n3.Display\n0.Exit"<<endl;
 	
 		cin>>a;
 		
 		if(a==1)
 		{
 			try
 			{
	 			cin>>e;
	 			cout<<"Enter the to be pushed"<<endl;

	 			s.push(e);
	 		}
	 		catch(int z)
	 		{
	 			cout<<"Stack overflow"<<endl;
	 		//	break;
			}
		 }
		 else if(a==2)
		 {
		 	try
		 	{
		 		cout<<"poped the element"<<endl;
	 			s.pop();
 			}
 			catch(int y)
 			{
	 			cout<<"Stack underflow"<<endl;
			//	break;
			}		
		 }
		 else if(a==3)
		 {
		 	cout<<"Elements in the stack"<<endl;
		 	s.display();		
		 }
	
		 else
			{
				return 0;
		}
	}
	 return 0;
}
 
