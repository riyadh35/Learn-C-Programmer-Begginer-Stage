#include <stdio.h>



// Multipication without return type ;
/* void numberMultification(int num1, int num2){
    int multification = num1 * num2;
    printf("mulfications %d * %d = %d", num1 , num2, multification);
}

int main(){
    numberMultification(3,4);

    return 0;
} */


//***************************** */
// Multipications with return type


int numberMultiplications (int num1, int num2){
    int multifications = num1 * num2;

    return multifications;
}

int main(){
    int result = numberMultiplications(4, 4);
    printf("The multipications result is = %d", result);

    return 0;
}