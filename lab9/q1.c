#include<stdio.h>
#include <string.h> 

struct balancedFood{
	char food_Name[100];
	float calories;
	char type_0f_Food[50];
	int cost;

};

int main(){
	struct balancedFood array[4];

	for (int i=0;i<4;i++){
		printf("Enter detail of food #%d\n", (i+1));

		printf("Enter name of food : ");
		scanf("%s",array[i].food_Name);

		printf("Enter its calories : ");
		scanf("%f", &array[i].calories);

		printf("Enter the type of food : ");
		scanf("%s", array[i].type_0f_Food);

		printf("Enter its cost : ");
		scanf("%d", &array[i].cost);
		printf("\n");
		printf("********************************\n");

	}
	printf("\n");
	for (int i = 0; i < 4; i++) {

	    printf("details of food %d : \n", (i+1));
	    printf("Name of food: %s\n", array[i].food_Name);
	    printf("Calories : %f\n", array[i].calories);
	    printf("Type 0f Food : %s\n", array[i].type_0f_Food);
	    printf("Cost : %d\n", array[i].cost);
	    printf("\n");
	    printf("********************************\n");
  }
  printf("\n");
  
  return 0;


	

}