#include<stdio.h>
#include<stdlib.h>
#include <string.h>

struct library
{
	int an
	char Title_of_book[100];
	char Author[100];
	int price;
	int flag;	
}
librarybook[50] = {
	1, "Let Us C", "Yashavant Kanethkar", 258, 1,
	2, "Data Structure Through C", "Yashavant Kanethkar", 300, 1,
	3, "Let Us C++", "Yashavant Kanethkar", 220, 1,
	4, "Harry Potter : The Philosopher's Stone", "J. K. Rowling", 550, 0,
	5, "The Two Towers", "J. R. R. Tolkien", 560, 0,
	6, "The Hobbit", "J. R. R. Tolkien", 550, 1,
	7, "The Fellowship of the Ring", "J. R. R. Tolkien", 550, 0
};
int count()
{
	int i = 0;
	while (librarybook[i].an)
		i++;
	return i;
}
void addbook(){
	int next = count();
	librarybook[next].an = next + 1;

	printf("Enter book title : \n");
	scanf("%s" ,librarybook[next].title);

	printf("Enter author of book : \n");
	scanf("%s" ,librarybook[next].author);

	printf("Enter price of book : \n");
	scanf("%f" ,&librarybook[next].price);

	scanf("%d", &librarybook[next].price);
	librarybook[next].flag = 1;

}
void Display(int i){
	prinf("title : %s\n" ,librarybook[i].Title_of_book);
	prinf("Author : %s\n",librarybook[i].Author);
	prinf("Price : %d\n",librarybook[i].price);
	if (librarybook[i].flag)
		printf("\nStatus : Issued");
	else
		printf("\nStatus : Available");
}
void listofAauthorsbook(char *Author)
{
	printf("Enter the name of the author (case sensitive) : ");
	int i = 0;
	printf("\nBooks of \"%s\" are following : \n\n", author);
	while (librarybook[i].an)
	{
		if (!(strcmp(Author, librarybook[i].Author)))
			display(librarybook[i].an);
		i++;
	}
}
void specified_book(int an){
	printf("\nEnter the accession number of book : ");
	scanf("%d", &an); 
	
	int i = 0;
	while (librarybook[i].an)
	{
		if (librarybook[i].an == an)
		{
			printf("\n\nTitle of the book : %s\n", librarybook[i].title);
			return;
		}
	}
	printf("No any book found found\n");

}
void addbook()
{
	int i = 0;
	while (librarybook[i].an)
	{
		Display(i + 1);
		i++;
	}
}
int main(){
	int choice = 1,an;
	char auth[30];
	while(choice != 6){
		system("cls");
		printf("1. Add book information\n");
		printf("2. Display book information");
		printf("3. List all books of a specified author\n");
		printf("4. List the title of specified book\n");
		printf("5. List the count of books in the library\n");
		printf("6. Exit");
		printf("Chose one from given \n");
		scanf("%d", &choice);

		switch(choice){
			case 1:
				addbook();
				
				break;

			case 2:
				Display();
				break;

			case 3:
				listofAauthorsbook();
				break;

			case 4:
				specified_book();
				break;

			case 5:
				Count();
				break;

			default:
				printf("\nWrong choice, Try Again!!");

		}

	}
	return 0;

	
}