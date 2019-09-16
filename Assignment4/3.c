#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int fac(int);
void power(float);

int main()
{
	float n;
	double rad,result;
	printf("Enter value of x:\n");
	scanf("%f",&n);
	
	
	power (n);
	
	return 0;
}
int fac(int n)
{
	int i,fac=1;
	for(i=1;i<=n;i++)
		fac=fac*i;
	return fac;
	
	
}
void power(float n)
{
	
	
	int i,j;
	float q,sum=0;
	int limit=5;
	
	q=n;
	n=n*(3.1415/180);
	for(i=1,j=1;i<=limit;i++,j=j+2)
	{
		if(i%2!=0)
		{
			sum=sum+pow(n,j)/fac(j);
			
		}
		else
		{
			sum=sum-pow(n,j)/fac(j);
		}
	}
	printf("sin(%0.1f)= %f",q,sum);
	
}
