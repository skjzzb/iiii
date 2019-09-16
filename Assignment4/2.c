#include<stdio.h>

int fib(int);

int main()
{
	int n;
	printf("Enter end point of series\n");
	scanf("%d",&n);
	fib(n);
	
	return 0;
}

int fib(int n)
{
	int i,f=0,s=1,a,nxt;
	printf("%d\n%d\n",f,s);
	for(i=0;i<n;i++)
	{
	if(n<=1)
		nxt=i;
		
	else
	{
		nxt=f+s;
		f=s;
		s=nxt;
		
	}
		printf("%d\n",nxt);
	}
	return 0;
	
}
