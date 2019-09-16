#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,q,r;
	printf("Enter a Dividend and Divisor\n");
	scanf("%d%d", &a,&b);
	r=a%b;
	q=a/b;
	printf("Quotient is: %d and Remainder is: %d\n",q,r);
	

	return 0;
}
