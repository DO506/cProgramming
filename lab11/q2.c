#include <stdio.h> 
int main( )
{
	FILE *fp ;
	char read[80];  
	char ch ;
	printf("Enter file name:\n");
	scanf("%s", read);
	fp = fopen(read, "r"); 
	
	if ( fp == NULL ) //file not found
	{
	puts ( "file does not exists" ) ;
	
	}
	while ( 1 )
		{
		ch = fgetc ( fp ) ; 
		if ( ch == EOF )
		break ;
		printf ( "%c", ch ) ; 
		}
	printf ( "\n" ) ;
	fclose ( fp ) ; 
	return 0;
}