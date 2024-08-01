#include <stdio.h>

int main(){
    int number;

    printf("Please enter your number: ");
    scanf("%d", &number);

    if(number >= 80){
        if(number >100){
            printf("This is valid number", number);
        }
        else if(number <= 100 && number > 90){
            printf("you got golden A+.", number);
        }
        else{
            printf("You got A+", number);
        }
    }
    else if(number >= 70){
        printf("You got A", number);
    }
    else if(number >= 60){
        printf("You got A-", number);
    }
    else if(number >= 50){
        printf("You got B", number);
    }
    else if(number < 0){
        printf("This is invalid number", number);
    }
    else{
        printf("You got fail........",number);
    }



    return 0;
}