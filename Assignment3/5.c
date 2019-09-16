#include<stdio.h>
#include<math.h>
int add(int);

int main()
{
    int n=0,c=0;
    printf("Enter the number\n");
    scanf("%d",&n);
   add(n);
   
   printf("Sum of the digits is %d",add(n));
    
	
	
	
	return 0;
}
int add(int n)
{	
	int sum=0;
	while(n!=0)
   {
   		sum=sum+ n%10;
   		n=n/10;
   	
   }
   return sum;
	
}
