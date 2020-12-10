#include<stdio.h>

#define N 3
void main() {


struct students {
  int id;
  char name[20];
  int dd,mm,yy;
  } e[N];

int d,m,y,i;


for(i=0;i<N;i++) {

printf("\tEnter employee data:\n");
printf("\t*********************\n");

printf("\nEnter student id: ");
scanf("%d",&e[i].id);

printf("\nEnter student name: ");
scanf("%s",e[i].name);

printf("\nEnter date of joining (dd mm yy): ");
scanf("%d%d%d",&e[i].dd,&e[i].mm,&e[i].yy);

}

printf("******************************\n");

printf("\nEnter current date(dd mm yy): ");
scanf("%d%d%d",&d,&m,&y);
printf("Name of students who have been three years are \n");

for(i=0;i<N;i++) {

if((y-(e[i].yy))>=3) {

printf("%s\n",e[i].name);

}


}
}
