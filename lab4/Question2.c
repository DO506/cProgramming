#include<stdio.h>

int swap(int *p, int *q, int *r, int *s){

	int t;
	t = *p;
	*p = *q;
	*q = *r;
	*r = *s;
	*s = t;
}
int main(){

	int a ;
	printf("Enter First number = ");
	scanf("%d", &a);
	int b ;
	printf("Enter Second number = ");
	scanf("%d", &b);
	int c ;
	printf("Enter Third number = ");
	scanf("%d", &c);
	int d ;
	printf("Enter Fourth number = ");
	scanf("%d", &d);

	printf("\nBefore swap a b c d are %d %d %d %d " ,a,b,c,d);

	swap(&a,&b,&c,&d);

	printf("\nAfter swap a b c d are respectively %d %d %d %d",a,b,c,d);


}