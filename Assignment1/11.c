#include<stdio.h>
#include<math.h>

int main()
{
	char a;
	printf(" Enter a Alphabet is \n" );
	scanf("%c",&a);
	
	if(a>=65&&a<=90)
	{
		printf("%c is capital character",a);
	}
	else if(a>=97&&a<=122)
	{
		printf("%c is small character",a);
	}
	else 
	{
		printf("%d is Digit");
	}
	
	return 0;
}
