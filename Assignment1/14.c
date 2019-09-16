#include<stdio.h>
#include<math.h>

int main()
{
	int a;
	printf(" Enter a Year is \n" );
	scanf("%d",&a);
	
	if(a%4==0)
	{
		if(a%100==0)
		{
			if(a%400==0)
			{
				printf(" %d  Year is Leap Year \n",a );
			}
			else{
				printf(" %d  Year is not Leap Year \n",a );
			}
		}
		else
		{
				printf(" %d  Year is  Leap Year \n",a );
		}
	}
	else
	{
			printf(" %d  Year is not Leap Year \n",a );	
	}
		
	return 0;
}
