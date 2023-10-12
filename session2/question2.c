#include <stdio.h>

int main (){

    int rightAnswer, guess;
    
    rightAnswer = 37;
    guess = 0;

    while(guess != rightAnswer){
        printf("Enter your guess : ");
        scanf("%d", &guess);
    }

    printf("Well done :) \n");
    return 0;
}