#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void getDate(int*,int*,int*);


int main()
{
	int d,m,y;
	getDate(&d,&m,&y);
	printf("The Date DD-MM-YYYY : %d-%d-%d \n",d,m,y);
	
	
}
void getDate(int *d ,int *m,int *y)
{
	int p,q,r;
		
	printf("Enter The Date : DD-MM-YYYY \n");
	scanf("%d",&p);
	scanf("%d",&q);
	scanf("%d",&r);
	*d=p;
	*m=q;
	*y=r;
	
	
}

