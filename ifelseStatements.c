#include <stdio.h>

int main(){

    // int number;

    // int num2;

    // printf("Please enter your age: ");
    // scanf("&d\n", &number);

    // printf("Enter an integer: ");
    // scanf("%d", &num2);


    // if (number >= 18){
    //     printf("You are eligible for vote.", number);
    // }
    // else{
    //     printf("You are not eligible for Vote , You age is %d", number);
    // }


    // if(num2%2 == 0){
    //     printf("%d is an even integer", num2);
    // }
    // else{
    //     printf("%d is an odd integer.", num2);
    // }
    //  int number;
    // printf("Enter an integer: ");
    // scanf("%d", &number);

    // // True if the remainder is 0
    // if  (number%2 == 0) {
    //     printf("%d is an even integer.",number);
    // }
    // else {
    //     printf("%d is an odd integer.",number);
    // }

    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if(number%2 == 0){
        printf("%d is an even integer.", number);
    }
    else{
        printf("%d is an odd integer.", number);
    }
    return 0;
}