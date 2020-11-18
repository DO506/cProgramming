#include<stdio.h>
int calculator(int option,int x,int y);
int main(){

	int choice;
	int a, b;

	printf(" 1. Addition\n 2. Subtraction \n 3. Multiplication \n 4. Division \n");
	scanf("%d" ,&choice);

	printf("Enter x : ");
	scanf("%d", &a);

	printf("Enter y : ");
	scanf("%d", &b);
	calculator(choice,a,b);
}
int calculator(int option,int x,int y){
	
	int sum, difference, product, quoitent;

	switch(option){
		case 1:
	
		sum = x + y;
		printf("The sum of two number is %d ", sum);

		break;

		case 2:

		difference = x - y;
		printf("The difference of two number is %d ", difference);

		break;

		case 3:

		product = x * y;
		printf("The product of two number is %d ", product);

		break;

		case 4:

		quoitent = x / y;
		printf("The quoitent of two number is %d ", quoitent);

		break;

		default:
		printf("INVALID choice\n");
		break;

	}
}