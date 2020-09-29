#include <stdio.h>

int main(void) {

	float ca=40;
	float CA = (ca/100*50);
	float se=40;
	float SE = (se/100*50);
	float total=CA+SE;

	if (CA>=20 && SE>=20 && total==50){
		printf("pass");
	}
	else if(CA>20 && SE<=20){
		printf("failed in SE");
	}
	else if(CA<=20 && SE>20){
		printf("Failed in CA");
	}
	else if (CA>=20 && SE>=20 && total!=50){
		printf("fail");
	}	
	else{
		printf("error");
	}

}
	