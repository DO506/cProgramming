 #include <stdio.h>
 //int a[100],i,n,index=0,new1,pos,odd_sum = 0, even_sum = 0,arr[100],array[100];
 
int display(int a[],int n)
 { 
    int i;
    for(i=0; i<n; i++)
    {
         
        printf("%d ",a[i]);
         
    }
 	
 }
int insertion(){
	int a[100],i,n,index=0,new1;
  	printf("insertion of element \n");
    printf("Enter size of the array : ");
    scanf("%d", &n);
 
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
	printf("Enter index less than the length of the array %d:",n);
    scanf("%d",&index);
    if(index<n)
    {
 
     printf("Enter new element : ");
     scanf("%d",&new1);
    
     printf("before  insertion :");
     display(a,n);
     a[index]=new1;
     
    printf("\nafter   insertion :\n");
    display(a,n);
    }
}
int deletion(){
 int a[100],i,n,index=0,pos;
   	printf("\ndeletion of element\n");
    printf("\nEnter size of the array : ");
    scanf("%d", &n);
 
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nInput the position where to delete: ");
    scanf("%d",&pos);
    i=0;
    while(i!=pos-1)
            i++;
      
    while(i<n){
            a[i]=a[i+1];
            i++;
    }
    n--;
    printf("\nThe new list is : "); 
    for(i=0;i<n;i++)
        {
           printf("  %d",a[i]);
        }  
        printf("\n\n");

}
int sum(){
	int a[100],i,n,odd_sum = 0, even_sum = 0;
  	printf("sum of even and odd elements \n");
    printf("Enter size of the array : ");
    scanf("%d", &n);
 
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
	 for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0){

            even_sum = even_sum + a[i];
        }
        printf("Sum of all even numbers = %d\n", even_sum);

       if (a[i] % 2 == 1){
            odd_sum = odd_sum + a[i];
       
        }
         printf("Sum of all odd numbers  = %d\n", odd_sum);
    
    }
    

}
int main(){
	
    
	insertion();
	deletion();
	sum();

}