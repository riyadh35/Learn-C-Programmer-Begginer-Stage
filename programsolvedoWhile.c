#include <stdio.h>

int main(){
    // program to add numbers until the user enters zero;
    int number, sum = 0;

    // the body of the loop is executed at least one

    do{
        printf("Enter a number: ");
        scanf("%d", &number);

        sum += number;
    }
    while (number != 0);
    printf("sum = %d", sum);

    return 0;
}