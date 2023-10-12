// Write a program that calculate simple interest, given principal, rate, and time.
#include <stdio.h>

int main (){
    float si, p, r, t;

    printf("What is the rate ? \n ");
    scanf("%f",&r);
    printf("What is the given principal ? \n ");
    scanf("%f",&p);
    printf("What is the time ? \n ");
    scanf("%f",&t);

    si = (p*r*t)/100;
    printf("Your simple interest is %.2lf percent \n",si);

}