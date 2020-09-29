#include <stdio.h>

int main(void) {
	int a = 10;
	int b = 2;
	//addition
	int sum = a+b;
	printf ("Sum of a and b is %d\n", sum);

	//substraction
	int difference = a-b;
	printf ("Difference of a and b is %d\n", difference);

	//multiplication
	int product = a*b;
	printf ("Product of a and b is %d\n", product);

	//division
	float quotient = a/b;
	printf ("Quotient of a and b is %f\n", quotient);

	//Modular division
	int modulus = a%b;
	printf ("Modulus of a and b is %d\n", modulus);



}