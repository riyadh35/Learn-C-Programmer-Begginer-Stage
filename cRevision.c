// C Flow Control Revision if..else, for loop , while and do...while, break and continue, switch statement, C goto Statement;


#include <stdio.h>

int main (){

    // if else statement ---- problem 

    int num1, num2;

    //Input two number from user

    printf("Enter two number :");
    scanf("%d%d", &num1, &num2);

    // Only use if statement;

    if(num1 > num2){
        printf("Num1 = %d is maximum number", num1);
    }



    return 0;
}