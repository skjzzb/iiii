/*10. Write a program to accept and display 3 by 3 matrix. 
Write Accept() and Display() functions to perform the tasks.
a. Find the transpose of a matrix and print the transpose using 
display() function.
b. Accept another matrix of same dimensions.
 Find the addition of two matrices and print the resultant matrix.*/
 
 #include<stdio.h>
 
 void accept(int[3][3]);
 void transpose(int[3][3]);
 void display(int[3][3]);
 
 int main()
 {
 	int arr[3][3];
 	int arr1[3][3];
 	int r[3][3];
	int i,j,n;
 	
 	while(1)
 	{
 	printf("\nChoose \n\n1.Addition\t2.Transpose\t0.Exit.\n");
 	scanf("%d",&n);
 	if(n==1)
 	{
 	 			accept(arr);
 			display(arr);
 			accept(arr1);
 			
 				for(i=0;i<3;i++)
			 	{
			 		for(j=0;j<3;j++)
			 		{
			 			r[i][j]=arr[i][j]+arr1[i][j];
					 }
				 }
			display(r);
 			
					 		
	}
	else if(n==2)
	{
		accept(arr);
		display(arr);
		transpose(arr);
		
	}
	else
	{
		return 0;
	}
 	
 	
 	}
	 return 0;
 }
 
 void accept(int arr[3][3])
 {
 	int i,j;
 	printf("Enter the elements in matrix:\n");
 	for(i=0;i<3;i++)
 	{
 		for(j=0;j<3;j++)
 		{
 			scanf("%d",&arr[i][j]);
		 }
	 }
 	
 }
 
 void display(int arr[3][3])
 {
 	int i,j;
 	printf("\n");
 	for(i=0;i<3;i++)
 	{
 		for(j=0;j<3;j++)
 		{
 			printf("%d \t",arr[i][j]);
		 }
		 printf("\n");
	 }
	  printf("\n");
 }
 
 void transpose(int arr[3][3])
 {
 	
 	int i,j;
	 int temp[3][3];
 	printf("Transpose of matrix:\n");

 	for(i=0;i<3;i++)
 	{
 		for(j=0;j<3;j++)
 		{
 			
 		/*	temp=arr[i][j];
 			arr[i][j]=arr[j][i];
 			arr[j][i]=temp;
 			*/
 			temp[i][j]=arr[j][i];
 			
 			
		 }
		 printf("\n");
	 }
	
	 display(temp);
 	
 }
