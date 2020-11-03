#include<stdio.h>
int largest(int arr[3][5][5],int n) 
{ 
    int i,j,k; 
     
    // Initialize maximum element 
    int max = arr[0][0][0]; 
  
    // Traverse array elements from second and 
    // compare every element with current max   
    for (i = 0; i < 3; i++){
        for(j = 0; j < 5; j++ ){ 
            for (k = 0; k < 5; ++k){
                if (arr[i][j][k] > max) 
                max = arr[i][j][k];
              
            } 
        }
    }
  
    return max; 
} 
  

int main()
{

int arr[3][5][5] = {
					{
					{ 2, 4, 3, 5, 5 },
					{ 7, 8, 5, 6, 4 },
					{ 3, 4, 5, 4, 3 },
					{ 5, 6, 5, 6, 2 }
					},
					{
					{ 7, 6, 7, 0, 8 },
					{ 3, 4, 4, 5, 4 },
					{ 5, 3, 4, 5, 9 },
					{ 2, 3, 5, 1, 3 }
					},
					{
					{ 8, 9, 3, 2, 2 },
					{ 7, 2, 5, 4, 1 },
					{ 3, 4, 3, 4, 2 },
					{ 5, 1, 5, 2, 5 },
					}
				};

				int n = sizeof(arr)/sizeof(arr[0][0][0]); 
			    printf("Largest in given array is %d", largest(arr, n)); 
			    return 0; 
			}