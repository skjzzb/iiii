/*35. Modify above class 
Stack in assignment 50 to handle “overflow” and “underflow”
 exceptions using exception handling feature.*/

#include<iostream>
#define max 5
using namespace std;


class Stack
{
	int t[max];
	public:
			int top;
			void push(int);
			void pop();
			void display();
			Stack();
			
};

Stack::Stack()
{
	for(int i=0;i<max;i++)
	{
		t[i]=0;
	}
	top= -1;
	
}
void Stack::push(int e)
{
	int z=max,x;
	z--;
	if(z!=top)
	{
		top++;
		t[top]=e;
	}
	else 
	{
			
			throw x;
	}
}
void Stack::pop()
{	
	int z;
	if(top!=0)
	{
		t[top]=0;
		top--;	
	}
	else
	{
		throw z;
	}	
}
void Stack::display()
{
	for(int i=0;i<=top;i++)
	{
		cout<<"Element ---"<<t[i]<<endl;		
	}	
}	

 int main()
 {
 	int a,e;
 	Stack s;
 	while(1)
 	{
 	
 		cout<<"Enter the option:\n1.Push\n2.Pop\n3.Display\n0.Exit"<<endl;
 		cin>>a;
 		
 		if(a==1)
 		{
 			try
 			{
	 			cout<<"Enter the to be pushed"<<endl;
	 			cin>>e;
	 			s.push(e);
	 		}
	 		catch(int z)
	 		{
	 			cout<<"Stack overflow"<<endl;
	 			break;
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
				break;
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
 
