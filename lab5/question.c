 #include <stdio.h>
 
 
int display(int a[],int n)
 { 
    int i;
    for(i=0; i<n; i++)
    {
         
        printf("%d ",a[i]);
         
    }
 	
 }


int main()
{
    int a[100],i,n,index=0,new1,pos,odd_sum = 0, even_sum = 0,arr[100],array[100];
   
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
     
    printf("\nafter   insertion :");
    display(a,n);
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

    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0){

            even_sum = even_sum + a[i];
        }
        printf("Sum of all even numbers = %d\n", even_sum);

        else{
            odd_sum = odd_sum + a[i];
        }
         printf("Sum of all odd numbers  = %d\n", odd_sum);
    
    }
   
    printf("Enter size of the array : ");
    scanf("%d", &n);
 
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(i = 0; i < n; i++)  
        array[index++] = a[i];  
  
    for(i = 0; i < n; i++)  
        array[index++] = arr[i];  
  
    printf("\nElements of array[%d] is ..\n", n);  
    for(i = 0; i < 100; i++)  
        printf("%d\n", array[i]);  
  
}