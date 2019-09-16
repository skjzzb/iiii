#include<stdio.h>
#include<math.h>

int main()
{
    int sum=0,i,n,original;
    printf("Enter the number\n");
    scanf("%d",&n);
    original=n;
   for(i=1;i<n;i++)
   {
   	if(n%i==0)
   		{
   			sum=sum+i;
   			//printf("%d\n",sum);
		}
   		
   	}
     if(original==sum)
     {
     	printf("This %d is Perfect number \n",original);
	 }
	 else
	 {
	 	   	printf("This %d is not Perfect number \n",original);

	 }
   
    
	
	
	
	return 0;
}
