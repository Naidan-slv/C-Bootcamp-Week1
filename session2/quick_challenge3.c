#include <stdio.h>

int main() {

    int a ;

    for(a = 0; a < 1000; a+=11)
    {
        printf("Youre going up in %d\n", a);
    }

    printf("Your total is %d\n", a);
}