#include<stdio.h>
#include<math.h>

int main()
{
	int a;
	printf("Enter the age of person\n");
	scanf("%d", &a);
	if(a>18)
	{
	printf("person is not eligible\n");
	}
	else
	{
	printf("person is eligible");	
	}

	return 0;
}
