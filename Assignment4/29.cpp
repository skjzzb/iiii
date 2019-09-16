/*
29. Write a class Student having following –
a. Student Roll Number (int)
b. Student Name (char array)
c. Date of Birth (Date class object where Date is user defined class)
Implement default constructor, parameterized constructor, accept, display. 
Generate the student roll number automatically.
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
			void accept();
	
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

void Date::accept()
{
	cout<<"Enter DOB"<<endl;
	cin>>dd>>mm>>yy;
	
}
class Student
{
	
	char  name[20];
	Date dob;
	
	
	public:		
			Student();
			Student(int,char *, int,int,int);
			void accept();
			void disp();
};
static int rollno=0;
Student::Student()
{

	strcpy(name,"XYZ");
	rollno++;
}

Student::Student(int r,char *n, int d,int m,int y):dob(d,m,y)
{
	rollno=r;
	//name=new char[10];
	strcpy(name,n);
	
}
void Student::accept()
{
	cout<<"Enter\n1.Rollno\n2.Name\n3"<<endl;
		//name=new char[10];
	cin>>rollno;
	cin>>name;
	dob.accept();
	
	
}
void Student::disp()
{
	cout<<rollno<<endl;
	cout<<name<<endl;
	dob.display();
}
int main()
{
	
		
	
	Student s1,s2;
	s2.accept();
	s2.disp();
	Student s3;
	s3.disp();

	
	

	
	
	return 0;
}

