#include <stdio.h>

int main(){

    int number1, number2;

    printf("Enter two integer: ");
    scanf("%d %d \n", &number1, &number2);


    if(number1 == number2){
        printf("Result: %d = %d", number1 ,number2);
    }

    else if(number1 > number2){
        printf("Result: %d > %d", number1, number2);
    }

    else{
        printf("Result: %d < %d", number1, number2);
    }

    int riyad, rasel;

    printf("Enter your age guys:  \n");
    scanf("%d %d", &riyad, &rasel);

    if(riyad == rasel){
        printf("Both are same age .", riyad, rasel);
    }

    else if(riyad > rasel){
        printf("riyad is elder then Rasel .", riyad, rasel);
    }
    else{
        printf("Rasel is elder then riyad.");
    }


    return 0;
}