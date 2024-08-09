// Switch statement problems
#include <stdio.h>

int main(){
    int month;

    printf("Enter a month number (1-12): ");
    scanf("%d", &month);

    switch (month)
    {
    case 1:
        printf("January");
        break;
    case 2:
        printf("February");
        break;
    case 3:
    printf("March");
    break;
    case 4:
    printf("April");
    break;

    default:
        printf("Ops! Sorry you are don't enter a month number....");
    }

    return 0;
}