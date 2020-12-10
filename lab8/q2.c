#include<stdio.h>

int roman(int year){
	if(year>=1000){
		printf("M");
		roman(year-1000);
	}
	else if(year>=500){
		printf("D");
		roman(year-500);
	}
	else if(year>=100){
		printf("C");
		roman(year-100);
	}
	else if(year>=50){
		printf("L");
		roman(year-50);
	}
	else if(year>=10){
		printf("X");
		roman(year-10);
	}
	else if(year>=5){
		printf("V");
		roman(year-5);
	}
	else if(year>=1){
		printf("I");
		roman(year-1);
	}
}
int main(){
	int year;
	printf("enter year :\n");
	scanf("%d",&year);

	roman(year);

}