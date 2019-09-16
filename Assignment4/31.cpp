/*
31. Modify above assignment 47 as given below –
a. Create Employee pointer and allow it to hold address of any Employee objects (WageEmployee & SalesPerson) created on heap
b. Using Employee pointer call accept() and display() to accept and display the details of dynamically created objects.
c. Free the memory for the objects created on heap
d. Make the Employee class  as abstract. 	
*/
#include<iostream>
#include<cstring>
using namespace std;

class Date
{
	int dd;
	int mm;
	int yy;
	
	public: 
			Date();
			Date(int,int,int);
			void accept();
			void display();
		
	
};
Date::Date()
{
	dd=01;
	mm=01;
	yy=2000;	
}
 Date::Date(int d,int m,int y)
{
	dd=d;
	mm=m;
	yy=y;
}
void Date::accept()
{
	cout<<"Enter the date:"<<endl;
	cin>>dd>>mm>>yy;
	
}
void Date::display()
{
	cout<<dd<<" / "<<mm<<" / "<<yy<<endl;
}
class Employee
{
	int eid;
	char  name[20];
	Date dob;
	
	public:		
			Employee();
			Employee(int,char *, int,int,int);
			virtual void accept();
			virtual void display();
			virtual int calcsalary()=0; //Employee class  as abstract
};
Employee::Employee()
{
	eid=10;
	strcpy(name,"XYZ");
}
Employee::Employee(int r,char *n, int d,int m,int y):dob(d,m,y)
{
	eid=r;
	//name=new char[10];
	strcpy(name,n);
	
}
void Employee::accept()
{
	cout<<"Enter\n1.eid\n2.Name\n3.DOB"<<endl;
		//name=new char[10];
	cin>>eid;
	cin>>name;
 	dob.accept();	
}
void Employee::display()
{
	cout<<eid<<endl;
	cout<<name<<endl;
	dob.display();
}
class WageEmployee :public Employee
{
	int hours;
	int rate;
	public: 
			WageEmployee();
			WageEmployee(int,char *,int,int,int,int,int);
			void accept();
			void display();
			int calcsalary();	
};
void WageEmployee::accept()
{
	
	Employee::accept();
	cout<<"Enter Hours and Rate:"<<endl;
	cin>>hours>>rate;		
}
WageEmployee::WageEmployee()
{
	hours=20;
	rate=25;
}
WageEmployee::WageEmployee(int i,char *n, int d,int m,int y,int h,int r):Employee(i,n,d,m,y)
{
	hours=h;
	rate=r;
}
void WageEmployee::display()
{
	Employee::display();
	cout<<"Hours:"<<hours<<endl;
	cout<<"Rate:"<<rate<<endl;
}
int WageEmployee::calcsalary()
{
	return hours*rate;
}
class SalesPerson: public WageEmployee
{
	int sales;
	int com;
	public:
			SalesPerson();
			SalesPerson(int,char *,int,int,int,int,int,int,int);
			void accept();
			void display();
			int calcsalary();
};
void SalesPerson::accept()
{
	WageEmployee::accept();
	cout<<"Enter Sales and Commision:"<<endl;
	cin>>sales>>com;
}
SalesPerson::SalesPerson()
{
	sales=30;
	com=40;
}
SalesPerson::SalesPerson (int i,char *n,int d,int m,int y,int h,int r,int s,int c):WageEmployee(i,n,d,m,y,h,r)
{
	sales=s;
	com=c;	
}
void SalesPerson::display()
{
	WageEmployee::display();
	cout<<"Sales:"<<sales<<endl;
	cout<<"Commision:"<<com<<endl;
}
int SalesPerson::calcsalary()
{
	return WageEmployee::calcsalary()+(sales*com);
}
int main()
{
	int a,b,ch;
	Employee *eptr;
	cout<<"Choose object of class\n1.WageEmployee\n2.Salesperson\n"<<endl;
	cin>>ch;
	switch(ch)
	{
		case 1:
				eptr= new WageEmployee;//Employee pointer and allow it to hold address WageEmployee
				break;
		case 2:
				eptr= new SalesPerson;//Employee pointer and allow it to hold address SalesPerson
				break;
	}
	eptr->accept();		//Using Employee pointer call accept() and display()
	eptr->display();
	delete eptr;		//Free the memory for the objects created on heap
	return 0;
}

