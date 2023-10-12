// You need to convert from fahrenheit to celsius 
 
 #include <stdio.h>

int main (){

float celsius, fahrenheit;

printf("Enter a value in fahrenheit to convert into celsius: ");
scanf("%f", &fahrenheit);

// converting into celcius now using a formula

celsius = (fahrenheit - 32.0) / 1.8;

printf("The value in celsius is : %.2lf \n", celsius);
}