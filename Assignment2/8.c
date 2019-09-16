#include<stdio.h>
#include<math.h>

int main()
{
    int sum,n=0,c=0;
    printf("Enter the number\n");
    scanf("%d",&n);
   
   while(n!=0)
   {
   		sum=sum+ n%10;
   		n=n/10;
   		
   		
   	
   	
   }
   printf("Sum of the digits is %d",sum);
    
	
	
	
	return 0;
}
