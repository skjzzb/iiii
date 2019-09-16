#include<stdio.h>
#include<math.h>
void armstrong(int,int);

int main()
{
    int n,m;
     printf("Enter the size of number\n");
    scanf("%d",&m);
    printf("Enter the number\n");
    scanf("%d",&n);
    armstrong(n,m);
	
	return 0;
}
void armstrong(int n,int m)
{
	int sum=0,rem=0,original;
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
}
