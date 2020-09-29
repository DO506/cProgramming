#include <stdio.h>
#include <stdlib.h>
int main(){

	int A[2][4] = {{ 'A', 'B', 'C', 'D' },
 					{ 'a', 'b', 'c', 'd' }};
 	int B[2][4] = {{ 'A', 'B', 'C', 'D' },
 					{ 'E' , 'F', 'G', 'H' }};
 	int i, j, output;
 	 for (i = 0; i < 2; i++) {
 	 	for(j=0;j < 4; j++){

 	 		if (A[i][j] == B[i][j])
	 			output = 1;
	 		else
	 			output = 0;
	 		printf("\n%c AND %c = %d ", A[i][j], B[i][j], output );
	 	}
	 }	
}
