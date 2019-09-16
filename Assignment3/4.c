#include<stdio.h>
#include<math.h>
int sum(int,int);
int main()
{
    int i,n,m;
    printf("Enter two numbers\n");
    scanf("%d%d",&n,&m);
    sum(n,m);
    printf("Addition of %d and %d is %d",n,m,sum(n,m));
	
	return 0;
}

int sum(int n,int m)
{
	return m+n;
	}
