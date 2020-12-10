#include<stdio.h>
struct {
   int feet;
   float inch;
}d1,d2,result;
int main(){
   printf("*********Enter first distance*********\n");
   printf("enter feet\n");
   scanf("%d",&d1.feet);
   printf("enter inche\n");
   scanf("%f",&d1.inche);

   printf("*********Enter second distance*********\n");
   printf("enter feet\n");
   scanf("%d",&d2.feet);
   print("enter inch");
   scanf("%f",&d2.inch);

//Adding distance 
   result = d1.feet + d2.feet;
   result = d1.inch + d2.inch;

   // convert inches to feet if greater than 12
   while (result.inch >= 12.0) {
      result.inch = result.inch - 12.0;
      ++result.feet;
   }
   printf("\nSum of distances = %d\'-%.1f\"", result.feet, result.inch);
   return 0;
}