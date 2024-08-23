// Here, the value entered by the user is stored in the address of var variable. Let's take a working example


#include <stdio.h>

int main(){
    int var = 5; 
    printf("var = %d\n", var);


    // Notice the user of & before var

    printf("address of var : %p", &var);


    return 0;
}