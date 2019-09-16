/*13. Write a program that calculates the average marks of all the subjects.
  The number of subjects ‘n’ is accepted from the user.  
  Allocate memory dynamically for ‘n’ integers.
  Free the memory when not in use.
  */
  
  #include<stdio.h>
  #include <stdlib.h> 
  
  int main()
  {
  	int *ptr,n,i;
	float sum=0;
	float r=0;
  	
  	printf("Enter the number of subjects:\n");
  	scanf("%d",&n);
  	
  	ptr= (int*)malloc(sizeof(int)*n);

  	printf("Enter the marks of subjects:\n");
  	for(i=0;i<n;i++)
  	{
  		scanf("%d",&ptr[i]);	
	}
	for(i=0;i<n;i++)
  	{
  		sum=sum+ptr[i];
	}
  	r=sum/n;
  	printf("Average marks is: %f\n",r);
  	free (ptr);
  	return 0;
  }
