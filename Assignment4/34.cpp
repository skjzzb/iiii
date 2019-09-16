/*34. Write a template class Stack (LIFO) having -
	Date members –  Size(int),   Top of stack (int),  Pointer of type T
               Functionalities- Default constructor, push, pop, display
Test this code for pushing integers, doubles, complex objects.*/

#include<iostream>
#define max 5
using namespace std;

template <class T>
class Stack
{
	T t[max];
	public:
			T top;
			void push(T);
			void pop();
			void display();
			Stack();
			
};
template <class T>
Stack<T>::Stack()
{
	for(int i=0;i<max;i++)
	{
		t[i]=0;
	}
	top= -1;
	
}
template <class T>
void Stack<T>::push(T e)
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
template <class T>
void Stack<T>::pop()
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
template <class T>
void Stack<T>::display()
{
	T c;
	for(int i=0;i<=top;i++)
	{   c=t[i];
		cout<<"Element ---"<<c<<endl;		
	}	
}	
template <class T>
 int main()
 {
 	int a,e;
 	char c;
    Stack<int> s;
 	Stack<char> s;
 	while(1)
 	{
 	
 		cout<<"Enter the option:\n1.Push\n2.Pop\n3.Display\n0.Exit"<<endl;
 		cin>>a;
 		
 		if(a==1)
 		{
 			try
 			{
			 	
				cout<<"Enter the to be pushed"<<endl;
				cin>>c;
	 			s.push(c);
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
 
