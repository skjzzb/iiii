#include<stdio.h>
#include<math.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
float div(float,float);
int main()
{
   int a,b,r;
	float x,y,z;
	int c;
	char ch;
	while(1)
{
	printf(" \nChoose the operation  \n" );
	printf("1. Addition \n2. Subtration\n3. Multiplication\n4. Division\n5. Exit\n" );
	scanf("%d",&c);

	switch(c)
	{
		case 1: printf("Enter two number\n");
				scanf("%d%d",&a,&b);
				printf("Addition is: %d",add(a,b));
			
				break;
		case 2: printf("Enter two number\n");
				scanf("%d%d",&a,&b);
				printf("Subtraction is: %d",sub(a,b));
				break;
		case 3: printf("Enter two number\n");
				scanf("%d%d",&a,&b);
				printf("Multiplication is: %d",mul(a,b));
				break;
		case 4: printf("Enter two number\n");
				scanf("%d%d",&a,&b);
				printf("Division is: %f",div(a,b));
				break;
		case 5: 
				exit(0);
				
					

		
		}

	}
	
}
int add(int a,int b)
{ 	
	
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
int mul(int a,int b)
{
	return a*b;
}
float div(float a,float b)
{
	return a/b;
}

