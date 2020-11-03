#include <stdio.h>
#include <math.h>

int main(void) {
	// part 1
	int a = 7;
	int b = 1;
	int c = 5;
	int d = 3;
	int e = 4;
	int f = 9;

	float ans = a*b-(c%d)*e+f;
	printf("answer is %f\n" , ans);
	
	//part b
	int k = 9;
	int l = 6;
	int m = 2;
	int n = 1;
	int o = 3;

	int ans2=k^(l%m)+n*o;

	printf("answer is %d" , ans2);
	
}
