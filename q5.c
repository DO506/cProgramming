#include <stdio.h>

int main()
{
    char ch;
    int l_Vowel, u_Vowel;

    printf("Please Enter an alphabet: \n");
    scanf(" %c", &ch);

    l_Vowel = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    u_Vowel = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');

    if (l_Vowel || u_Vowel) {
    	printf("\n %c is a VOWEL.", ch);
	}
    else {
    	printf("\n %c is not VOWEL.", ch);
	}
    return 0;
}