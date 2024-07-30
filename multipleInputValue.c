#include <stdio.h>

int main(){
    int a;
    float b;

    printf("Enter integer and then a float: ");

    scanf("%d%f", &a, &b);

    printf("Your enterd integer %d and float %f", a,b);
    
    return 0;
}