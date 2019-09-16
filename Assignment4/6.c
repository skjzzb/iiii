#include<stdio.h>
#include<math.h>
#include<stdlib.h>


int max(int ,int ,int *);


int main()
{
	int d,m,y,i,arr[5];
	
	printf("Enter the two integers: \n");
	scanf("%d",&d);
	scanf("%d",&m);
	max(d,m,&y);
	printf("Maximum integer is %d\n",y);
	
	
	
}
int max(int d,int m,int *y)
{
	if(d>m)
	{
		*y=d;
		
		return *y;
	}
	else if(d<m)
	{
		*y=m;
		
		return *y;
	}
	
	
}

