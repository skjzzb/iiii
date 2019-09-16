#include<stdio.h>
#include<math.h>
void prime();

int main()
{
    prime();
	
	//return 0;
}

void prime()
{
	int sum=0,i,j,n=2,m;
    
printf("Prime number between 1-100 is\n");
   for(i=2;i<=100;++i)
   {
   	int flag=0;
   	for(j=2;j<=i/2;j++)
   	{
   		if((i%j)==0)
   		{
   			flag++;
   			break;
		}
   		
	   }
	if(flag==0)
   	{
   		printf("%d\n",i);
	   }   
   	
   	}
   	
        
	
}
