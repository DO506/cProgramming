#include <stdio.h>
int main() {
   int i, j, rows=5;
   // printf("Enter the number of rows: ");
   // scanf("%d", &rows);
   for (i = 5; i >= 1 ; i--) {
      for (j = 1; j <= i; j++) {
         printf("* ");
      }
      printf("\n");
   }
   return 0;
}