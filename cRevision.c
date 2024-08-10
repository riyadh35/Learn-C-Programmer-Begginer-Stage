// C Flow Control Revision if..else, for loop , while and do...while, break and continue, switch statement, C goto Statement;


#include <stdio.h>

int main (){

    // if else statement ---- problem 

    int num1, num2, num3;

    //Input two number from user

    printf("Enter theree  number :");
    scanf("%d%d%d", &num1, &num2 , &num3);

    // // Only use if statement;

    // if(num1 > num2){
    //     printf("Num1 = %d is maximum number", num1);
    // }

    //     if(num1 < num2){
    //     printf("Num2 = %d is maximum number", num2);
    // }

    // get maximum number use if else statement 

    // if(num1 > num2){
    //     printf("Num1 = %d is maximum number", num1);
    // }
    // else{
    //     printf("Num2 = %d is maximum number", num2);
    // }

    // Write a C program to find maximum between three numbers.

    

    // get grade system number using nested if else in c programme 


    if(num1 > num2 && num1 > num3){

        printf("The maximum number num1 = %d", num1);
    }

    else if(num2 > num1 && num1 > num3){
        printf("The maximum number num2 = %d", num2);
    }
    else {
        printf("The maximum number is num3 = %d", num3);
    }

    return 0;
}