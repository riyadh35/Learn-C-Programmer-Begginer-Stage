// Here, the value entered by the user is stored in the address of var variable. Let's take a working example


#include <stdio.h>

int main(){
   /*  int var = 5; 
    printf("var = %d\n", var);


    // Notice the user of & before var
    printf("address of var : %p", &var);


    return 0; */

    int* pc, c; 
    c = 5;

    pc = &c;
    *pc = 1;
    
    printf("%d ", *pc); // Output : 1
    printf("%d",c); // output: 1

    return 0;
}

