/*
11. Write a program which will calculate 
multiplication of two 3 by 3 matrices.*/


 #include<stdio.h>
 
 void mul(int[3][3],int[3][3]);
 void accept(int[3][3]);
 void display(int[3][3]);
 
 int main()
 {
 	int arr[3][3];
 	int arr1[3][3];
 	int r[3][3];
	int i,j,n;
 	
 	while(1)
 	{
 	printf("\nChoose \n\n1.Multiplication\t0.Exit.\n");
 	scanf("%d",&n);
 	if(n==1)
 	{
 	 		accept(arr);
 	 		display(arr);
 	 		accept(arr1);
 			display(arr1);
 			mul(arr,arr1);
 					
						 		
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
 
 void mul(int arr[3][3],int arr1[3][3])
 {
 	int i,j,k;
 	int r[3][3]; 
	 
	 for(i = 0; i < 3; ++i)
        for(j = 0; j < 3; ++j)
        {
            r[i][j]=0;
        }
	for(i = 0; i < 3; ++i)
        for(j = 0; j < 3; ++j)
            for(k = 0; k < 3; ++k)
            {
                r[i][j] += arr[i][k] * arr1[k][j];
            }
		 
	 printf("Multiplication of 3X3 matrix: \n");
	 display(r);
 	
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

