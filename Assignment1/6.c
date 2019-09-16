#include<stdio.h>
#include<math.h>

int main()
{
	float p,n,r,si,po;
	printf("Enter a Principal amount, No. of months Rate of intrest\n");
	scanf("%f%f%f", &p,&n,&r);
	si= (p*n*r)/100;
	printf("Simple Intrest is %f\n", si);
	

	return 0;
}
