#include<stdio.h>
#include<math.h>

int main()
{
    int a=1,n=0,c=0;
    printf("Square of Even numbers between 1-10\n");
   
   
   do
   {
   		if(a%2==0)
   		{
   			c=pow(a,2);	
   			printf("%d \tis the square of\t %d\n",c,a);
		}
   		a++;
    	
   }
    while(a<=10);
    
	
	
	
	return 0;
}
