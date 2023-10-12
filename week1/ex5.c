// Create a program to swap the value of two variables 
#include <stdio.h>
int main (){

int x,y;
    printf("This programme will be swapping the values of both x and y \n");
    printf("Enter the value of subject x : ");
    scanf("%d",&x);
    printf("Enter the value of subject y : ");
    scanf("%d",&y);

    int a = x;
    int b = y;

    printf("The new value assigned to x is now %d \n",b);
    printf("The new value assigned to y is now %d \n",a);
    return 0;

}