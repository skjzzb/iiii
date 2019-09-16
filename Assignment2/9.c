#include<stdio.h>
#include<math.h>

int main()
{
    int sum=0,rem=0,n=0,original;
    printf("Enter the number\n");
    scanf("%d",&n);
    original=n;
   while(n!=0)
   {
   		rem= n%10;
   		sum=sum*10+rem;
   		n=n/10;
   		
   	}
     if(original==sum)
     {
     	printf("This %d is Palindrom \n",sum);
	 }
	 else
	 {
	 	   	printf("This %d is not Palindrom \n",sum);

	 }
   
    
	
	
	
	return 0;
}
