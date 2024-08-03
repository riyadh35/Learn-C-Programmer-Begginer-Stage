/*

The do..while loop is similar to the while loop with one important difference. The body of do...while loop is executed at least once. Only then, the test expression is evaluated.

The syntax of the do...while loop is:

do {
  // the body of the loop
}
while (testExpression);
*/



/// Program to add numbers until the user enters zero


#include <stdio.h>

int main(){

    double num1, sum1 = 0;    
    double number, sum = 0;

    do{
        printf("Enter a numner: ");
        scanf("%lf", &number);

        sum+=number;
    }
    while(number != 12);
    printf("Sum = %.2lf", sum);
    

    return 0;



    // the body of the loop is executed at least once
    do{
        printf("Enter a number: ");
        scanf("%lf", &num1);
        sum1+=num1;
    }

    while(num1 != 1);

    printf("sum = %.lf", sum1);

    return 0; 
}