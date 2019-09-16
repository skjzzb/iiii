#include<stdio.h>
#include<math.h>

int main()
{
    int a=1,n=0,c=0,i;
    printf("Enter the N for range of even number\n");
    scanf("%d",&n);
    printf("The sum of Odd number between 1-N is\n");
    for(i=0;i<n;i++)
    {
    	if(a%2!=0)
    	{
    		c=c+a;
		}
    	a=a+1;
    
    	//a++;
	}
		printf("%d\n",c);
	
	
	
	return 0;
}
