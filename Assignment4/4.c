#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define PI 3.14
void circle(int,float*,float*);
void rectangle(int,int,int*,int*);

int main()
{
	int r,l,w,peri,area1,o;
	float area,circum;
	printf("Choose the :\n1. Circle\n2. Rectangle\n");
	scanf("%d",&o);
	
	switch(o)
	{
		case 1:	
				printf("Enter the radius for circle\n");
				scanf("%d",&r);
				circle(r,&area,&circum);
				printf("Area of Circle is %f\n",area);
				printf("Circumfarace of Circle is %f\n",circum);
				break;
		case 2:
				printf("Enter the length and Width for rectangle\n");
				scanf("%d",&l);
				scanf("%d",&w);
				rectangle(l,w,&area1,&peri);
				printf("Area of retangle is %d\n",area1);
				printf("Perimeter of Rectangle is %d\n",peri);
				break;
		
		default:
				printf("Enter Valid Option\n");
			return 0;
				
				
	}
	
}
void circle(int r ,float *area,float *circum)
{
	
	*area= PI * (pow(r,2));
	*circum= 2*(PI*(r));
	
	
	
}
void  rectangle(int l,int w,int *area1,int *peri)
{
	*area1= (l)*(w);
	
	*peri= 2*(l+w);
	

	
}
