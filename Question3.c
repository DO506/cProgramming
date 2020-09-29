#include <stdio.h>
int main() {
   int i, j, rows=5;
   // printf("Enter the number of rows: ");
   // scanf("%d", &rows);
   for (i = 0; i <= 5; ++i) {
      for (j = 0; j <= i; ++j) {
         printf("%d ", j);
      }
      printf("\n");
   }
   return 0;
}