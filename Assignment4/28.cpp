/*
28. Write a class Matrix which will store elements of integer matrix (two dimensional array) in dynamically allocated space. Provide below functions in matrix class - 
	1. Default constructor - Take 3 as default row and column size. Initialize the matrix elements to 0
	2. Parameterized constructor - Takes row and column size as parameters. Initialize matrix to 0.
	3. Copy constructor - Performs deep copy of matrix object.
	4. Destructor - Deletes memory which is allocated dynamically.
	5. Overloaded + operator - Performs addition of two matrices.
	6. Overloaded ! operator - Calculates transpose of a user entered square matrix.
	7. Overload >> - Accepts row & column size from user. Also accepts matrix elements from user.
	8. Overload << - Displays matrix.
*/
#include<iostream>
#include<cstring>
using namespace std;


class Matrix
	{
		int row;
		int col;
		int **p;
			
	public:
			Matrix();
			Matrix(int,int);
			Matrix(Matrix&);
			void accept();
			void display();
			Matrix operator+(Matrix);
			Matrix operator ! ();
			~Matrix();
			friend ostream& operator<<(ostream &cout,Matrix &);
			friend istream& operator>>(istream &cin,Matrix &);
	
	};
istream& operator>> (istream &cin,Matrix &m)
{
	Matrix temp;
	int c,r;
	temp.col=c;
	temp.row=r;
	cout<<"Enter the row and column"<<endl;
	cin>>r>>c;
}
ostream& operator<< (ostream &cout,Matrix &m)
{
int i,j;
	
	for(i=0;i<m.row;i++)
	{
			for(j=0;j<m.col;j++)
			{
			
			cout<<m.p[i][j]<<" ";
		}
		cout<<endl;
	}
 } 
Matrix Matrix::operator!()
{
	Matrix temp;

	int i,j;
	
	for(i=0;i<row;i++)
	{
			for(j=0;j<col;j++)
			{
			
			temp.p[i][j]=p[j][i];
		}
	}

 return temp;
}

Matrix Matrix::operator+(Matrix m)
{
	//Matrix temp;

	int i,j;
	
	for(i=0;i<row;i++)
	{
			for(j=0;j<col;j++)
			{
			
			this->p[i][j]=this->p[i][j]+m.p[i][j];
		}
	}

 return (*this);	  

}
Matrix::~Matrix	()
{
/*	int j;
	for(j=0;j<row;j++)
		{
		delete p[j];     //Destructor
		}
		
	delete p;*/
}
Matrix::Matrix(Matrix &m)
{
	row=m.row;
	col=m.col;
	p=new int *[row];
	int i,j;
	for (i=0;i<row;i++)
		p[i]=new int[col];
		for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			p[i][j]=m.p[i][j];
		}
	
	}
}

Matrix::Matrix()
{
	row=2;
	col=2;
	p=new int *[row];
	int i,j;
	for (i=0;i<row;i++)
		p[i]=new int[col];
		for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			p[i][j]=0;
		}
	
	}
	
}
Matrix::Matrix(int r,int c)
{
	row=r;
	col=c;
	p=new int *[row];
	int i,j;
	for (i=0;i<row;i++)
		p[i]=new int[col];
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			p[i][j]=0;
		}
	
	}
		
	
}
void Matrix::display()
{
	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<this->p[i][j]<<" ";
		}
		cout<<endl;
	}
}
void Matrix::accept()
{
	
	cout<<"Enter element of 2X2 Matrix"<<endl;
	
	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cin>>p[i][j];
		}
	
	}

}


int main()
{

/*	Matrix m1(3,3); //parameterized constructor
	m1.display();
	cout<<endl;
		
	Matrix m2; 
	m2.accept();
	m2.display();
	
	Matrix m3;
	Matrix m4(m2);//copy constructor
	m4.display();*/
	
	Matrix m5(2,2),m6(2,2),m7(2,2),m8(3,3);
	
	//////////////////////
	m5.accept();		 //Matrix 1
	m6.accept();		 //Matrix 2
	m7=m5+m6;			 //Matrix 1+2
	m7.display();
	/////////////////////
	
	/////////////////////
	m8.accept();
	m8=!m8;				//Overloaded ! transpose of Matrix
	m8.display();
	/////////////////////
	
	/////////////////////
	cin>>m5; 			//Overload >> 
	m5.accept();     
	cout<<m5;			//Overload <<
    ////////////////////
	
	

}
