#include<stdio.h>
#include<math.h>

int main()
{
	char a;
	printf(" Enter a Alphabet is \n" );
	scanf("%c",&a);
	
	if(a=='a'||a=='e'||a== 'i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
	{
		printf("%c is Vowel",a);
	}
	
	else 
	{
		printf("%c is consonant",a);
	}
	
	return 0;
}
