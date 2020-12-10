#include<stdio.h>
struct employee{
	char name[20];
	int emp_id;
	struct date_of_joining{
		int date;
		int month;
		int year;
	}d;
	
};
int main(){
	struct employee details[5];
	struct date_of_joining d;
	for(int i = 0; i < 5; i++){
		printf("\nenter your name :");
		scanf("%s",details[i].name);
		printf("\nenter your Employee ID :");
		scanf("%d",&details[i].emp_id);
		printf("\nenter date that you have joined :");
		scanf("%d",&details[i].d.date);
		printf("\nenter month that you have joined :");
		scanf("%d",&details[i].d.month);
		printf("\nenter year that you have joined :");
		scanf("%d",&details[i].d.year);
	}
	for(int i = 0; i < 5; i++){
		for(int j = i ; j < 5; j++){
			if(details[i].d.year > details[j].d.year){
				int temp = details[i].d.year;
				details[i].d.year = details[j].d.year;
				details[j].d.year = temp;
			}
		}
	
	}
	for(int i=0;i<5;i++){
		printf("\nName :%s",details[i].name);
		printf("\nEmployee ID :%d",details[i].emp_id);
		printf("\ndate of joining:%d/%d/%d ",details[i].d.date,details[i].d.month,details[i].d.year);
		printf("\n");
	}
	
	return 0;
}