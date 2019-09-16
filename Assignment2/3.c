#include<stdio.h>
#include<math.h>

int main()
{
    int a=1,n=0,c=0;
    printf("Enter the N for range of even number\n");
    scanf("%d",&n);
    printf("The Sum of Even number between 1-N is\n");
    while(a<n)
    {
    	if(a%2==0)
    	{
    		c=c+a;
		}
    	a=a+1;
    
    	//a++;
	}
		printf("%d\n",c);
	
	
	
	return 0;
}
