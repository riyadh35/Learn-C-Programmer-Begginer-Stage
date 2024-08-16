#include <stdio.h>

void numberMultification(int num1, int num2){
    int multification = num1 * num2;
    printf("mulfications %d * %d = %d", num1 , num2, multification);
}

int main(){
    numberMultification(3,4);

    return 0;
}