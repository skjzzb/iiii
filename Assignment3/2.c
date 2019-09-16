#include<stdio.h>
#include<math.h>
void check(int);
int main()
{
    int sum=0,i,n,m;
    printf("Enter the number\n");
    scanf("%d",&n);
    check(n);

	return 0;
}

void check(int n)
{
	int p=0;
	//p=p+n;
	if(1<=n)
	{
		printf("%d is positive number",n);	
	}
	else
	{
		printf("%d is negative number",n);	
	}
}
