// this programme will determine whether an interger is odd or even 
 #include <stdio.h>

 int main (){
    int a;
    printf("Enter an interger to see if its odd or even: ");
    scanf("%d",&a);

    if(a % 2 == 0)
        printf("Your value is Even \n");
    else
        printf("Your value is Odd \n");

    return 0;
 }