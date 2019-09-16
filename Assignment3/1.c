#include<stdio.h>
#include<math.h>
void square(int);
int main()
{
    int sum=0,i,n,m,flag=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    square(n);

	return 0;
}

void square(int n)
{
	int p=pow(n,2);
	printf("%d is the square of %d",p,n);
}
