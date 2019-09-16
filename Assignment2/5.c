#include<stdio.h>
#include<math.h>

int main()
{
    int a=1,n=0,c=0;
    printf("Enter the number 1-10\n");
    scanf("%d",&n);
   
   do
   {
   		
   		c=n*a;
   		printf("%d * %d= %d\n",n,a,c);
   		
   		a++;
    	
   }
    while(a<=10);
    
	
	
	
	return 0;
}
