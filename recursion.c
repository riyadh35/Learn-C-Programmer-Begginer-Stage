#include <stdio.h>

int main(){
    int number, result;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    result = sum(number);

    printf("sum = %d", result);
    return 0;
}

int sum(int n){
    if (n != 0)
        // sum() function call itself
        return n+sum(n-1);
    else
        return n;
}