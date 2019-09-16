#include<stdio.h>
#include<math.h>

int main()
{
	int arr[3],j,i,a,max;
	printf("Enter the three numbers \n");
	for(j=0;j<3;j++)
	{
		scanf("%d",&arr[j]);
	}
	for( i=0;i<3;i++)
	{
		//max=arr[i];
		if(arr[i]<arr[i+1]||arr[i]==arr[i+1])
		{
			max=arr[i+1];
		}
		
	
		
		
	}
printf(" Largest number is %d", max);
	return 0;
}
