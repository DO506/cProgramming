// Question5a
// #include <stdio.h>
//  void main()
//  {
//  char *s= "hello";
//  char p = s;
//  printf("%c%c", p[0], s[1]);
//  }

// //  correct code

// #include <stdio.h>
//  void main()
//  {
//  char s[] = "hello";
//  char *p = s;
//  printf("%c%c", p[0], s[1]);
//  } 

//Queation5b
// # include <stdio.h>
// int main( )
// {
//  int i = 0 ;
//  i++ ;
//  if ( i <= 5 )
//  {
//  printf ( "C is very easy\n" ) ;
//  break;
//  main();
//  }
// return 0 ;
// }

// correct code

# include <stdio.h>
int main( )
{
	 int i = 0 ;
	 
	 if ( i <= 5 )
	 {

	 printf ( "C is very easy\n" ) ;
	 i++ ;
	 goto end;
	 main();
}
end:
return 0 ;
}

//Queation5c

// # include <stdio.h>
// int i = 0 ;
// void val( ) ;
// int main( )
// {
// printf ( "main's i = %d\n", i ) ;
// val( ) ;
// printf ( "main's i = %d\n", i ) ;
// val( ) ;
// return 0 ;
// }
// void val( )
// {
// i = 100 ;
// printf ( "val's i = %d\n", i ) ;
// i++ ;
// }