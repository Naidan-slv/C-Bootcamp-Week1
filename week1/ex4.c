#include <stdio.h>
#include <math.h>

int main(){

    // set out value which we will use 
    float Radius;
    float pi;
    float area;

    // allocate values for Radius using &
    pi = 3.14;
    printf("What is your radius ? ");
    scanf("%f", &Radius);

    // Do actual calculations
    float y = Radius * Radius; 
    area = pi * y;
    // Print your answer only to two significant figures 
    printf("The area of your circle is: %.2lf units squared (2sf) \n ", area);

    return 0;

}