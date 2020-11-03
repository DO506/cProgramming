#include <stdio.h>
#include <stdlib.h>
 
int main()
{
 
    int n, i, *ptr, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // dynamic memory allocation using malloc()
    ptr = (int *) malloc(n*sizeof(int));

    if(ptr == NULL) // if empty array
    {
        printf("\nError! Memory not allocated\n");
        return 0;   // end of program
    }

    printf("\nEnter elements of array: ");
    for(i = 0; i < n; i++)
    {
        // storing elements at contiguous memory locations
        scanf("%d", ptr+i);    
        sum = sum + *(ptr + i);
    }


    //int length=sizeof(ptr)/sizeof(ptr[0]);


    printf("The repeating Elements are: \n");

    for(int i=0;i<n;i++){
    	for(int j=i+1;j<n;j++){
    		if(ptr[i]==ptr[j])
    			printf("%d\n",ptr[j] );
    	}
    }

    /* 
        freeing memory of ptr allocated by malloc 
        using the free() method
    */
    free(ptr);
    return 0;

}