#include<stdio.h>
#include<math.h>
int check(int);

int main()
{
    int sum=0,n;
    printf("Enter the number\n");
    scanf("%d",&n);
    check(n);
   	return 0;
}

int check(int n)
{
	 int m,i,flag=0;
	 m=n/2;
   for(i=2;i<=m;i++)
   {
   	if(n%i==0)
   		{
   			flag=1;
   			printf("%d is not Prime number",n);
   			break;
		}
		else if(flag==0)
		{
   			printf("%d is Prime number",n);
			return 0;
		}
   		
   	}
	
}
