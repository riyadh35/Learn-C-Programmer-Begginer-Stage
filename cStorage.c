#include <stdio.h>

// Local Variable 

int main (void){
    for(int i = 0; i <5 ; ++i){
        printf("C Programming");
    }
    // Error : i is not declared at this point 

    printf("%d", i);
    return 0;
}