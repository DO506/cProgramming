#include <stdio.h>
#include <stdlib.h>
#include <string.h>
# define max 2
struct library
{
	char title[40];
	char authorName[40];
	int price;
	char var[3];
};

int main(){
	struct library book[max];
	int choice,i,num,count = 0;
	char author[40];
	char btitle[40];

	do{
		printf("\n\t\tMENU");
		printf("\n------------------------");
		printf("\nPRESS 1 TO ADD BOOK INFO");
		printf("\nPRESS 2 TO DISPLAY BOOK INFO");
		printf("\nPRESS 3 TO LIST ALL BOOKS OF SPECIFIED AUTHOR");
		printf("\nPRESS 4 TO LIST THE TITLE OF SPECIFIED BOOK");
		printf("\nPRESS 5 TO LIST THE COUNT OF BOOKS IN THE library");
		printf("\nPRESS 6 TO EXIT");
		printf("\n------------------------");
		printf("\nEnter your choice: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("no of records you want to enter: ");
				scanf ("%d",&num);
				printf("ADD DETAILS OF THE BOOK %d\n",num);

				for (i = 0; i < num; i++)
				{
					printf("Enter title of the book: ");
					scanf("%s",book[i].title);
					printf("Enter the name of the author: ");
					scanf("%s",book[i].authorName);
					printf("Enter the price of the book: ");
					scanf("%d",&book[i].price);
					printf("Issue status yes/no: ");
					scanf("%s",book[i].var);
				}
				break;

			case 2: 
				printf("Details of all the books\n");

				printf("Book title.\tAuthor name\tPrice\tIssue status\n");
				for (i = 0; i < num; ++i)
				{
					printf("%s\t\t %s\t\t %d\t\t %s\t\t",book[i].title, book[i].authorName, book[i].price, book[i].var);
				}
				printf("\n");
				break;
				

			case 3:
				printf("Enter the Name of the author: ");
				scanf("%s",author);

				for (i = 0; i < num; ++i)
				{
					if(strcmp(book[i].authorName,author)==0){
						printf("%s ",book[i].title);
					}
				}
				break;

			case 4:
			printf("Enter the title of the book\n");
			scanf("%s",btitle);
				for (i = 0; i < num; ++i)
					{
						if(strcmp(book[i].title,btitle)==0){
							printf("\nInformation of the book title %s:\n",btitle);
							printf("%s\t%s\t%d\t%s",book[i].title, book[i].authorName, book[i].price, book[i].var);	
					}
				}
				break;
			case 5: 
				
				for (i = 0; i < num; ++i)
				{
					count++;
				}
				printf("Total number of books in the library %d",count);
				break;

			case 6:
				exit(0);
		}
	}while(count!=6);
	return 0;
}