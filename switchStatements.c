#include <stdio.h>

int main(){

    char operation3;
    double a1, a2;

    printf("Enter a operator [+,-,*,/]: ");
    scanf("%c", &operation3);
    printf("Enter two number for math : ");
    scanf("%lf %lf", &a1, &a2);

    switch (operation3)
    {
    case '+':
        printf("%.1lf + %.1lf = %.1lf", a1, a2, a1+a2);
        break;
    case '-':
        printf("%.1lf - %.1lf = %1.lf", a1,a2, a1-a2);
        break;
    case '*':
        printf("%.1lf * %.1lf = %.1lf", a1,a2, a1*a2);
        break;
    case '/':
        printf("%.1lf / %.1lf = %.1lf", a1,a2, a1/a2);
        break;
    default:
        printf("Sorry ... You are enter a error ...?");
    }
    return 0;
}



// #include <stdio.h>

// int main(){
//     char operation;
//     double n1, n2;

//     printf("Enter a operator second Swithc(+, -, *, /): ");
//     scanf("%c", &operation);
//     printf("Enter two oparends: ");
//     scanf("%lf %lf", &n1, &n2);

//     switch (operation)
//     {S
//             printf("%.1lf + %.1lf = %.1lf", n1, n2, n1+n2);
//             break;
        
//         case '-':
//             printf("%.1lf - %.1lf = %.1lf", n1, n2, n1-n2);
//             break;
//         case '*':
//             printf("%.1lf * %.1lf = %.1lf", n1, n2, n1*n2);
//             break;
//         case '/':
//             printf("%.1lf / %.1lf = %.1lf", n1, n2, n1/n2);
//             break;
//         default:
//         printf("Error ! Enter a error message ??????");
//     }
//     return 0;
// }