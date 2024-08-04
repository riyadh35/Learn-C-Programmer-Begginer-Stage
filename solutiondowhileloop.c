/*
Q. Can you use the while loop to print the multiplication table for the given number. Print the number from 10 to 1. So the output would be something like this.

9 * 10 = 90
9 * 9 = 81
9 * 8 = 72
9 * 7 = 63
9 * 6 = 54
9 * 5 = 45
9 * 4 = 36
9 * 3 = 27
9 * 2 = 18
9 * 1 = 9

*/

#include <stdio.h>

int main(){

    int number;

    printf("Enter the number : ");
    scanf("%d", &number);

    int count = 10;

    while(count >=1){

        int product = number * count;

        printf("%d * %d = %d\n", number , count, product);
        count = count - 1;
    }

    return 0;
}

// #include <stdio.h>

// int main() {
//     int number;
//     printf("Enter the number: ");
//     scanf("%d", &number);
    
//     int count = 10; 
    
//     while(count >= 1){
//         int product = number * count;
//         printf("%d * %d = %d\n", number, count, product);
//         count = count - 1;
//     }
//     return 0;
// }
    