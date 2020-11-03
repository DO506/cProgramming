#include <stdio.h>
int year;
int leapyear(int *y){
   //int year;
   printf("Enter a year: ");
   scanf("%d", &year);

   
   if (year % 4 == 0 || year % 100 == 1 && year % 400 == 0){
      printf("%d the year is leapyear",year);
   }
   else{
      printf("%d the year is not a leapyear\n",year );
   }

}
int main() {
   leapyear(&year);


   
}