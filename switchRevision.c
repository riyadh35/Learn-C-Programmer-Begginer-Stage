#include <stdio.h>

int main(){

      // Write a C Programe to print day of week name using switch case 

    //   int a;

    //   printf("Enter week day number: ");
    //   scanf("%d", &a);

    //   switch (a)
    //   {
    //     case 1:
    //         printf("This is Sunday");
    //         break;
    //     case 2:
    //         printf("This is Monday");
    //         break;
    //     case 3:
    //         printf("This is Tuesday");
    //         break;
    //     case 4:
    //         printf("This is Wednesday");
    //         break;
    //     case 5:
    //         printf("This is Thursday");
    //         break;
    //     case 6:
    //         printf("This is Friday");
    //         break;
    //     case 7:
    //         printf("This is Saturday");
    //         break;
      
    //   default:
    //     printf("Error ! You enter out of 7 or bellow of 0");
    //   }


    /*
     C program to create calculator using switch case and functions

    */
    char ch;
    double number1, number2;

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
        printf("Opps!! You enter wrond operator");
    }

    return 0;
}