#include<stdio.h>
#include<math.h>

int main()
{
	char a,b;
	printf(" Enter a Alphabet is \n" );
	scanf("%c",&a);
	
	if(a>64&&a<91)
	{
		b=a+32;
		printf("%c converted",b);
	}
	else
	{
		b=a-32;
		printf("%c converted",b);
	}
	
	return 0;
}
