#include<stdio.h>


int main(){
	
	int marks;
	printf("please enter your range marks to get Grading : ");
	scanf("%d", &marks);

	if(marks >= 90 && marks <=100){
		marks = 1;
	}
			
	else if(marks >= 80 && marks <=89){
		marks = 2;
	}

	else if(marks >= 70 && marks <=79){
		marks = 3;
	}

	else if(marks >= 60 && marks <=69){
		marks = 4;
	}

	else if(marks >= 50 && marks <=59){
		marks = 5;
	}

	else if(marks >= 40 && marks <=49){
		marks = 6;
	}

	else if(marks >= 30 && marks <=39){
		marks = 7;
	}

	else if(marks < 30){
		marks = 8;
	}
	else{
		printf(" ");
	}

	switch (marks){
		case 1:
			printf("Your grading is A+\n");
		break;

		case 2:
			printf("Your grading is A\n");
		break;

		case 3:
			printf("Your grading is B+\n");
		break;

		case 4:
			printf("Your grading is B\n");
		break;

		case 5:
		
			printf("Your grading is C+\n");
		break;

		case 6:
			printf("Your grading is C\n");
		break;

		case 7:
			printf("Your grading is D\n");
		break;

		case 8:
			printf("Your grading is F\n");
		break;

		default:
			printf("invalid");

	}

}