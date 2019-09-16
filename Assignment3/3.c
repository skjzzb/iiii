#include<stdio.h>
#include<math.h>
long int fact(int);
int main()
{
    int sum=0,i,n,m;
    printf("Enter the number\n");
    scanf("%d",&n);
    fact(n);
    printf("Factorial of %d is %d",n,fact(n));
	
	return 0;
}

long int fact(int n)
{
	int p=0;
	//p=p+n;
	if(n>=1)
	{
		return n*fact(n-1);				
	}
	else
	{
		return 1;
	}
	
		
}
