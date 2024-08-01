#include <stdio.h>

int main(){

    // Program to calculate the sum of first n natural numbers
    // Positive integers 1,2,3...n are known as natural numbers

    int num , count ,sum = 0;

    printf("Inter positive number : ");
    scanf("%d ", &num);

    for(count = 1; count <= num; ++count){
        sum += count;
    }

    printf("Sum = %d", sum);    

    return 0;


}