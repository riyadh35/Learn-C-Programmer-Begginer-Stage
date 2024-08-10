// C Flow Control Revision if..else, for loop , while and do...while, break and continue, switch statement, C goto Statement;


#include <stdio.h>

int main (){

    // if else statement ---- problem 

    // int num1, num2, num3;
    int number;

    //Input two number from user

    printf("Enter theree  number :");
    // scanf("%d%d%d", &num1, &num2 , &num3);

    scanf("%d", &number);

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

    




    // if(num1 > num2 && num1 > num3){

    //     printf("The maximum number num1 = %d", num1);
    // }

    // else if(num2 > num1 && num1 > num3){
    //     printf("The maximum number num2 = %d", num2);
    // }
    // else {
    //     printf("The maximum number is num3 = %d", num3);
    // }
        // get grade system number using nested if else in c programme 

    
    if(100 <= number || number >= 80){
        if(number >= 90)
        {
            printf("You got goldern A+", number);
        }else{
            printf("You got A+");
        }
    }

    else if(80 < number && number >=70){
        printf("You got A...");
    }

    else if( 70 < number && number >= 60){
        printf("You got B");
    }
    else if(60 < number && number >= 50){
        printf("You got c ...");
    }

    else if(50 < number && number >= 40){
        printf("You got D");
    }

    else if(40 < number && number >= 0.0){
        printf("You are Faild !!!!");
    }

    else if (100 > number ){
        printf("Envalid number..");
    }
    else{
        printf("It's eroor");
    }
    // else if(80)
         
    return 0;
}