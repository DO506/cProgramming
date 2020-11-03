#include<stdio.h>
int myFunc(){
    int intType;
    signed int signedintType;
    float floatType;
    double doubleType;
    char charType;
    signed char signedcharType;
    short shortType;
    long longType;
    long double longdoubleType;
    


    //sizeof evaluates the size of a variable
    printf("Size of integer: %ld bytes\n", sizeof(intType));
    printf("Size of signed-integer: %ld bytes\n", sizeof(signedintType));
    printf("Size of float: %ld bytes\n", sizeof(floatType));
    printf("Size of double: %ld bytes\n", sizeof(doubleType));
    printf("Size of char: %ld byte\n", sizeof(charType));
    printf("Size of signed-char: %ld bytes\n", sizeof(signedcharType));
    printf("Size of short: %ld bytes\n", sizeof(shortType));
    printf("Size of long: %ld bytes\n", sizeof(longType));
    printf("Size of long-double: %ld bytes\n", sizeof(longdoubleType));

}
int main() {
    printf("Size of integer: %ld bytes\n", sizeof(8));
    printf("Size of signed-integer: %ld bytes\n", sizeof(-7));
    printf("Size of float: %ld bytes\n", sizeof(4.5));
    printf("Size of double: %ld bytes\n", sizeof(10));
    printf("Size of char: %ld byte\n", sizeof("c"));
    printf("Size of signed-char: %ld bytes\n", sizeof("l"));
    printf("Size of short: %ld bytes\n", sizeof(3));
    printf("Size of long: %ld bytes\n", sizeof(12));
    printf("Size of long-double: %ld bytes\n", sizeof(1231));
    
}