#include <stdio.h>

int main(){

    int num1, num2;

    printf("Enter two numer for select maximum number: ");
    scanf("%d%d", &num1, &num2);

    switch(num1 > num2)
    {
        case 0:
            printf("%d is maximum number", num2);
            break;
        
        case 1:
            printf("%d is minumum number", num1);
            break;
    }

    return 0;
}