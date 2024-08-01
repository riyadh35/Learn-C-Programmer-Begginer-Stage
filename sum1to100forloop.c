// Sum of numbers from 1 to 100

#include <stdio.h>

int main(){

    int num , sum = 0;

    for (num = 1; num <= 100; num++){
        sum+=num;
    }

    printf("%d", sum);

    return 0;
}