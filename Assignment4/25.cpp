/*
25. Write a class Employee for an application which will have data members for employee id, employee name and salary. Provide the following functionalities in Employee class.
	1. Initialing objects using default and parameterized constructors.
	2. Accepting and displaying the information of employee from console
	
	class Employee
	{
		int emp_id;
		char emp_name[20];
		double salary;
	public:
		Employee();
		Employee(int, char*, double);
		void Accept();
		void Display();
	};

In "main" function declare an array of Employee objects. Write a menu driven program to -
	a. Insert record into an array.
	b. Update information of specific employee on the basis of emp_id accepted from user
	c. Display all records.
*/
#include<iostream>
#include<cstring>
using namespace std;


class Employee
	{
		int emp_id;
		char emp_name[20];
		double salary;
	public:
		Employee();
		Employee(int, char*, double);
		void Accept();
		void Display();
		void update(Employee[]);
	};
Employee::Employee()
{
	emp_id= 001;
	strcpy(emp_name,"abc");
	salary= 1000;
}
Employee::Employee(int i,char *n,double s)
{
	emp_id=i;
	strcpy(emp_name,n);
	salary=s;
}
void Employee::Accept()
{
	cout<<"Enter the Employee details: 1.Emp_id 2.Emp_name 3.Salary"<<endl;
	cin>>emp_id>>emp_name>>salary;
	
}
void Employee::Display()
{
	cout<<"Employee details: \n1.Emp_id \n2.Emp_name \n3.Salary\n"<<endl;
	cout<<emp_id<<endl<<emp_name<<endl<<salary<<endl;
	cout<<endl;
}

void Employee::update(Employee e[4])
{
	int i,up;
	cout<<"Enter the emp_id to be updated"<<endl;
	cin>>up;
	int n=4;
	for(i=0;i<n;i++)
				{
				if(e[i].emp_id==up)
					{
						e[i].Accept();
					}	
				}
}
int main()
{
	//Employee e[];
	/*
	//e7.Display();
	Employee e6(1003,"Jack",5000);
	e6.Display();*/
	int ch,i,up,n=4;
	//cout<<"Enter how many employees"<<endl;
	//cin>>n;
	Employee e[4];
	Employee e1;
	while(1)
	{
		cout<<"Enter the option:\n1.Insert\n2.Update\n3.Display all\n4.Exit"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1: for(i=0;i<n;i++)
					{
						e[i].Accept();
			 		}
			 		
			 		break;
			case 2: 
					//cout<<"Enter the emp_id to be updated"<<endl;
					//cin>>up;
					e1.update(e);
					break;
			case 3: for(i=0;i<n;i++)
					{
						e[i].Display();
			 		}
			 		break;
			case 4: exit(0);	
					
			
		}
	
	}


	
	/*
	int i,j,up,ch;
	Employee arr[4];
	for(i=0;i<4;i++)
	{
		arr[i].Accept();
		
	}

	for(j=0;j<4;j++)
	{	cout<<"Array call OP--->"<<j<<endl;
		arr[j].Display();
		

	}
	cout<<"Enter the emp_id to be updated"<<endl;
	cin>>up;
	arr[up].Accept();
	for(j=0;j<4;j++)
	{
		arr[j].Display();
		cout<<"Array call OP--->"<<j<<endl;

	}
	*/
	
	return 0;
}
