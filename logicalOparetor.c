#include <stdio.h>

int main(){

    // logical Operator
    /*
        *Logical AND = &&
        *Logical OR  = ||
        *Logical NOT = !
    */


   // Answer is 1 means True.
   // Answer is 0 means False.

    int a = 5, b=5, c=10, result;

    result = (a == b) && (c > b);

    printf("(a==b) && (c>b) is %d \n", result);
    
    result = (a==b) && (c <b);
    printf("(a==b) && (c <b)= %d\n", result);


    result = (a==b) || (c <b);
    printf("(a==b) || (c <b) = %d\n", result);


    result = (a !=b) || (c < b);
    printf("(a !=b) || (c < b) = %d\n", result);

    result = !(a != b);
    printf("!(a!=b) = %d\n", result);


    result = !(a == b);
    printf("!(a==b) = %d\n", result);


    
    return 0;


}