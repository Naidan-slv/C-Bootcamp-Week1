#include <stdio.h>
#include <math.h>

int main (){
    int intType;
    float floatType;
    double doubleType;
    char charType;
    // size of evaluates the size of a variable

    printf("Size of int is : %zu bytes\n", sizeof(intType));
    printf("Size of float is : %zu bytes\n", sizeof(floatType));
    printf("Size of double is : %zu bytes\n", sizeof(doubleType));
    printf("Size of char is : %zu bytes\n", sizeof(charType));

    return 0;
}