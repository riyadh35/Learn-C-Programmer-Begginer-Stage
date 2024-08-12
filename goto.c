#include <stdio.h>

int main(){

    
    char ch , raw;
    double number1, number2;

    jump:

    printf("Enter your operator: ");
    printf("Enter operand: ");

    scanf("%c %lf%lf", &ch, &number1, &number2);

    switch (ch)
    {
    case '+':
        printf("%.1lf + %.1lf = %.1lf", number1, number2, number1 + number2);
        break;
    
    case '-':
        printf("%.1lf - %.1lf = %.1lf", number1, number2, number1 - number2);
        break;
    case '*':
        printf("%.1lf * %.1lf = %.1lf", number1, number2, number1 * number2);
        break;
    case '/':
        printf("%.1lf / %.1lf = %.1lf", number1, number2, number1/number2);
        break;
    default:
        printf("Opps!! You enter wrond operator. Try Again\n");
        scanf("%c", &raw);
        goto jump;
    }
    return 0;
}