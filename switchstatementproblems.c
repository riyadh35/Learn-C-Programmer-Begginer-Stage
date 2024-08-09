// Switch statement problems
// #include <stdio.h>

// int main(){
      // problm : Logic to print week day by switch stataement problems 
    // int week;

    // printf("Enter a Week numbers (1-7) : ");
    // scanf("%d", &week);

    // switch (week)
    // {
    // case 1:
    //     printf("Monday");
    //     break;
    // case 2:
    //     printf("Tuesday");
    //     break;
    // case 3:
    //     printf("Wednesday");
    //     break;
    // case 4:
    //     printf("Thursday");
    //     break;
    // case 5:
    //     printf("Friday");
    //     break;
    // case 6:
    //     printf("Saturday");
    //     break;
    // case 7:
    //     printf("Sunday");
    //     break;
    // default:
    //     printf("Error ! You are don't enter a week number from 1 - 7");
    // }

    // Problem 2: C program to print number of days in a month using switch case
    // int month;

    // printf("Enter a month number (1-12): ");
    // scanf("%d", &month);

    // switch (month)
    // {
    // case 1:
    //     printf("January");
    //     break;
    // case 2:
    //     printf("February");
    //     break;
    // case 3:
    //     printf("March");
    //     break;
    // case 4:
    //     printf("April");
    //     break;

    // case 5:
    //     printf("May");
    //     break;
    // case 6:
    //     printf("June");
    //     break;
    // case 7:
    //     printf("July");
    //     break;
    // case 8:
    //     printf("August");
    //     break;
    // case 9:
    //     printf("September");
    //     break;
    // case 10:
    //     printf("Octomber");
    //     break;
    // case 11:
    //     printf("November");
    //     break;
    // case 12:
    //     printf("December");
    //     break;

    // default:
    //     printf("Ops! Sorry you are don't enter a month number....");
    // }


    // Problem -3 : Get Maximum number using C Switch Statements;

    // int num1, num2;

    // printf("Enter Two number : ");
    // scanf("%d %d", &num1, &num2);

    
    // switch (num1 > num2)
    // {
    // case 0:
    //     printf("%d is miximum number", num1);
    //   break;
    
    // case 1:
    //   printf("%d is minimum number ", num2);
    //   break;
    // }
//     return 0;
// }




/**
 * C program to find maximum between two numbers using switch case
 */

#include <stdio.h>

int main()
{
    int num1, num2;

    /* Input two numbers from user */
    printf("Enter two numbers to find maximum: ");
    scanf("%d%d", &num1, &num2);

    /* Expression (num1 > num2) will return either 0 or 1 */
    switch(num1 > num2)
    {   
        /* If condition (num1>num2) is false */
        case 0: 
            printf("%d is maximum", num2);
            break;

        /* If condition (num1>num2) is true */
        case 1: 
            printf("%d is maximum", num1);
            break;
    }

    return 0;
}