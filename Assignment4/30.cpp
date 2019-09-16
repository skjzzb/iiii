/*
30. Construct a hierarchy of employees.
         	1. Create an Employee class with attributes like employee id, name, date of birth.
2. Inherit class WageEmployee from base class Employee
3. WageEmployee class should have following members
		a. Number of hours worked
		b. Rate per hour
4. SalesPerson class should have following members
		a. Number of items sold
		b. Commission per item
5. Write constructors for WageEmployee and SalesPerson  classes. 
6. Override the functions for displaying details, calculating salary in WageEmployee and  	  	    	 
    SalesPerson class. 
		WageEmployee Salary = hours * rate
		SalesPerson Salary = hours*rate + sales*commission

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
			void accept();
			void display();
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
//	dob.accept();
	
	
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
			void display();
			int calcsalary();
	
};

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
			void display();
			int calcsalary();
};
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
	cout<<sales<<endl;
	cout<<com<<endl;
}
int SalesPerson::calcsalary()
{
	return WageEmployee::calcsalary()+(sales*com);
}

int main()
{
	int a,b;
	Employee e(10,"PQR",10,12,1900);
	
	e.display();
	WageEmployee we1;
	
	SalesPerson sp1;
	
	sp1.display();
	
	a=sp1.calcsalary();
	b=we1.calcsalary();
	cout<<"The calculated salary for WageEmployee is\t"<<b<<endl;
	cout<<"The calculated salary for salesperson is\t"<<a<<endl;

	
	
	
	
	return 0;
}

