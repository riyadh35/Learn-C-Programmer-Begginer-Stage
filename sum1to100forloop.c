// Sum of numbers from 1 to 100

#include <stdio.h>

int main(){

    int num , sum = 0;

    for (num = 1; num <= 100; num++){
        sum+=num;
    }

    printf("%d\n", sum);


    /*Get even number 1 to 100 sum*/

    int num1, sum1 = 0;

    for(num1 = 2; num1 <= 100; num1 = num1 +2){
        sum1+=num1;
    }

    printf("%d\n", sum1);


    /* Get odd numbur sum from 1 to 100*/

    int num2, sum2 = 0; 

    for (num2 = 1; num2 <=100; num2 = num2 + 2){
        sum2+=num2;
    }

    printf("%d\n",sum2);

    return 0;
} 