#include <stdio.h>

int main(){
    char operation;
    double n1, n2;

    printf("Enter a operator second Swithc(+, -, *, /): ");
    scanf("%c", &operation);
    printf("Enter two oparends: ");
    scanf("%lf %lf", &n1, &n2);

    switch (operation)
    {
        case '+':
            printf("%.1lf + %.1lf = %.1lf", n1, n2, n1+n2);
            break;
        
        case '-':
            printf("%.1lf - %.1lf = %.1lf", n1, n2, n1-n2);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf", n1, n2, n1*n2);
            break;
        case '/':
            printf("%.1lf / %.1lf = %.1lf", n1, n2, n1/n2);
            break;
        default:
        printf("Error ! Enter a error message ??????");
    }
    return 0;
}