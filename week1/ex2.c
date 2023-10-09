#include <stdio.h>
int main (){
    int ben, bob, tom;
    printf("What is your ben value? ");
    scanf("%d", &ben);
    printf("What is your bob value? ");
    scanf("%d", &bob);

    tom = ben + bob;
    printf("the tom is : %d\n",tom);

    return 0;
}