#include<stdio.h>

int main(){
	char v;
	printf("Enter one letter : ");
	scanf("%c" ,&v);

	if (v =='a' || v == 'e' || v == 'i' || v == 'o' || v == 'u' ||v =='A' || v == 'E' || v == 'I' || v == 'O' || v == 'U'){
		v = 1;
	}
	else{
		v=2;
	}

	switch(v){
		case 1:
			printf("it is vowel.\n");
			break;
		case 2:
			printf("it is not vowel\n");
			break;
		case 3:
			printf("INVALID\n");
			break;
	}
}