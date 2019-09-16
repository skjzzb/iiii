#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void maxmin(int [5]);
void mul(int [5]);

int main()
{
	int d,m,y,i,arr[5];
	
	printf("Enter the 5 integers in array: \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	maxmin(arr);
	printf("\n");
	mul(arr);

	
	
	
}
void maxmin(int arr[5])
{	
	int i,a,j,max=0,min=0;
	max=arr[0];
	min=arr[0];

	for(i=0;i<5;i++)
	{
		if(max<arr[i+1])
		{
			max=arr[i+1];
		}
	}
	
	for(j=0;j<4;j++)
	{
		if(min>arr[j+1])
		{
			min=arr[j+1];
		}
	
	
	}
	printf("Maximum element of array is- %d\nMinimum element of array is- %d\n",max,min);
	
}
void mul(int arr[5])
{
	int i,j,ans,n[5];
	for(i=0;i<5;i++)
	{
		n[i]=arr[i];
		n[i]=n[i]*5;
		
	}
	printf("Updated elements of array*5 are: \n");

	for(j=0;j<5;j++)
	{
		printf("%d\t",n[j]);
		
	
	}
	
}

