#include <stdio.h>

int main(){
    // program to add numbers until the user enters zero;
    double number, sum = 0;

    // the body of the loop is executed at least one

    do{
        printf("Enter a number: ");
        scanf("%lf", &number);

        sum += number;
    }
    while (number != 0.0);
    printf("sum = %.2lf", sum);

    return 0;
}