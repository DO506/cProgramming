#include <stdio.h> 

// This function displays a given file with breaks of 
// given line numbers. 
void show(char *fname, int n) 
{ 
	// Open given file 
	FILE *fp = fopen("file.txt", "r"); 
	int curr_lines = 0, ch; 

	// If not able to open file 
	if (fp == NULL) 
	{ 
		printf("File doesn't exist\n"); 
		return; 
	} 

	// Read contents of file 
	while ((ch = fgetc(fp)) != EOF) 
	{ 
		// print current character 
		putchar(ch); 

		// If current character is a new line character, 
		// then increment count of current lines 
		if (ch == '\n') 
		{ 
			curr_lines++; 

			// If count of current lines reaches limit, then 
			// wait for user to enter a key 
			if (curr_lines == n) 
			{ 
				curr_lines = 0; 
				getchar(); 
			} 
		} 

	} 

	fclose(fp); 
} 

int main() 
{ 
	char fname[] = "file.txt"; 
	int n = 5;
	// printf("enter N numbers to be printed : ");
	// scanf("%d",&n); 
	show(fname, n); 
	return 0; 
} 