#include<stdio.h>
#include<math.h>

int main()
{
    int sum=0,rem=0,n=0,m,original;
    printf("Enter the size of number\n");
    scanf("%d",&m);
    printf("Enter the number\n");
    scanf("%d",&n);
    original=n;
   while(n!=0)
   {
   		rem= n%10;
   		sum=sum+pow(rem,m);
   		n=n/10;
   		
   	}
     if(original==sum)
     {
     	printf("This %d is Armstrong Number \n",original);
	 }
	 else
	 {
	 	   	printf("This %d is not Armstrong number \n",original);

	 }
   
    
	
	
	
	return 0;
}
