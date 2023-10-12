// Your task is to write a program to calculate the factorial of an integr
#include <stdio.h>

int main (){

int i, number, fact = 1;
printf("Enter a number to find its factorial: ");
scanf("%d",&number);

// run a loop to do this factorial
// with for loops a semi colon at the end prevents the loop from looping
for (i=1; i <= number; i++)
     fact = fact * i; 


 printf("Factorial of %d is: %d\n ",number,fact); 

return 0;
}