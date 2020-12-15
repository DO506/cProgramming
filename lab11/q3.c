#include <stdio.h>
int main()
{
	FILE *fp;
	char filename[80]; //file path length
	int ch, character = 0, line = 0 ;

	int wordExist=0;
	int bufferLength = 255;
	char search[100];

	printf("Enter file name:\n"); //file path
	scanf("%s", filename);
	fp = fopen(filename, "r"); //only read mode
	if (fp == NULL)
		printf("Can't open %s for reading.\n", filename);	
	// word search
	printf("Enter word to be search = ");
	scanf("%s",search);
	char line1[bufferLength];

	while(fgets(line1, bufferLength, fp))
	{
		char *ptr = strstr(line1, search);
		if (ptr != NULL) 
		{
			wordExist=1;
			break;
		}
	}
	if (wordExist==1)
	{
		printf("Word exists.");
	}
	else 
	{
		printf("Word doesn't exist.\n");
	}
	//line and charaters
	if (fp == NULL)
		printf("Can't open %s for reading.\n", filename);	

	else
	{
		while ((ch = fgetc(fp)) != EOF)
		{
			character++;

			if (ch == '\n')
			line++;
		}
	fclose(fp);

	printf("\nNumber of characters = %d", character);
	printf("\nNumber of lines = %d\n", line);
	}

	

}