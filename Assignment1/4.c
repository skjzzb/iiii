#include<stdio.h>
#include<math.h>

int main()
{
	int a,cube,po;
	printf("Enter a number\n");
	scanf("%d", &a);
	cube= a*a*a;
	printf("Without using In-built function POW: %d\n", cube);
	po=pow(a,3);
	printf("Using In-built function POW: %d", po);

	return 0;
}
