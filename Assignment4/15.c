/*15. Define a structure �Book� having members � bookId, title, price.  
Use typedef to name this structure �BOOK�.  
Accept the data for a book and display the record.
*/
  
#include<stdio.h>
#include <string.h>
typedef struct 
{
	int bookid;
	char title[10];
	double price;
}Books;

int main()
{
	Books b[100];

int i;
	//char c[10];
	printf("Enter the :\n1.BookID\n2.Title\n3.Price\n");
	for(i=0;i<2;i++)
	{
		printf("BookID \n");
		scanf("%d",&b[i].bookid);
		printf("Title \n");
		scanf("%s",&b[i].title);
		//strcpy(b[i].title,c);
		printf("Price \n");
		scanf("%lf",&b[i].price);
	}
	for(i=0;i<2;i++)
	{
		printf("\tBookID is : %d\n",b[i].bookid);
		
		//strcpy(b[i].title,c);
		printf("\tTitle is : %s\n",b[i].title);
		printf("\tPrice is : %lf\n",b[i].price);
	}
	
	
    return 0;
}

  
