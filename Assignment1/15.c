#include<stdio.h>
#include<math.h>

int main()
{	int a,b,r;
	float m,n,p;
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
				r=a+b;
				printf("Addition is: %d",r);
				break;
		case 2: printf("Enter two number\n");
				scanf("%d%d",&a,&b);
				r=a-b;
				printf("Subtraction is: %d",r);
				break;
		case 3: printf("Enter two number\n");
				scanf("%d%d",&a,&b);
				r=a*b;
				printf("Multiplication is: %d",r);
				break;
		case 4: printf("Enter two number\n");
				scanf("%f%f",&m,&n);
				p=m/n;
				printf("Division is: %f",r);
				break;
		case 5: 
				exit(0);
				
					

		


	}
	
}
	
	
	return 0;
}
