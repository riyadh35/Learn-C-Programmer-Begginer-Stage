// it is possible to include if...else statement inside the body of another if...else statement . And this call Nested If Else .

#include <stdio.h>

int main(){
    int num1, num2;

    printf("Enter two integer: ");
    scanf("%d %d",  &num1, &num2);

    if(num1 >= num2){
        if(num1 == num2){
            printf("Result: %d = %d", num1,num2);
        }
        else{
            printf("Result: %d > %d", num1,num2);
        }
    }
    else{
        printf("Result: %d < %d", num1, num2);
    }

    return 0;

}