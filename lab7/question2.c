#include<stdio.h>
int main(){
	int id;
	int Id = 12190050;
	int password = 12345;
	top:
	printf("Enter your enrollment ID ");
	scanf("%d" , &id);
	password:
	if (id == Id) {
		
		int pass;
		printf("enter password :");
		scanf("%d",&pass);
		
		if(pass==password){
			printf("login successful!!!!\n");
		}
		else{
			printf("Incorrect password\n");
			goto password;
		}

	}
	else{
		printf("incorrect enrollment id\n");
		goto top;
	}

}