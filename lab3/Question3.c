#include<stdio.h>

int main(){
	float intial_Deposit;
	float credit;
	float debit;
	float balance;
	top:
	printf("Enter amount of initial_deposit ");
	scanf("%f" ,&intial_Deposit);

	if (intial_Deposit>=1000){
		int select;
		printf("1. Credit\n");
		printf("2. Debit\n");		
		printf("3. Balance enquiry\n");

		scanf("%d" , &select);

		switch(select){
			case 1:
			printf("Enter amount you want to credit ");
			scanf("%f",&credit);
			balance = intial_Deposit + credit ;
			printf("Balance after credit  = %f\n", balance);
			break;

			case 2:
			printf("Enter amount you want to debit \n");
			scanf("%f" ,&debit);
			balance = intial_Deposit - debit ;
			printf("Balance after debit = %f\n" ,balance) ;
			break;

			case 3:
			printf("Balance enquery = %f", intial_Deposit);
			break;

			case 4:
			printf("invaid amount\n");
			break;
		}

	}
	else{
		printf("Your intial_Deposit should be more than 1000 : try again\n");
		goto top;
	}
	
}