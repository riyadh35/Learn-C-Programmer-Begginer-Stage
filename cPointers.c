// Here, the value entered by the user is stored in the address of var variable. Let's take a working example


#include <stdio.h>

int main(){
   /*  int var = 5; 
    printf("var = %d\n", var);


    // Notice the user of & before var
    printf("address of var : %p", &var);


    return 0; */

   /*  int* pc, c; 
    c = 5;

    pc = &c;
    *pc = 1;
    
    printf("%d ", *pc); // Output : 1
    printf("%d",c); // output: 1 */



/*     Example : Working of Pointer
 */

    int* pc,c;

    c = 22 ;

    printf("Address of c: %p\n", &c);
    printf("Value of C: %d\n\n", c); // 22

    pc = &c;

    printf("Address of pointer pc: %p\n", pc);
    printf("Content of pointer pc: %d\n\n", *pc);


    c = 11;
    printf("Address of pointer c: %p\n", pc);
    printf("Value of C: %d\n\n", *pc); // 22

    *pc = 2;
    printf("Address of c: %p\n", &c);
    printf("Value of c : %d\n\n ", c); // 2

    
    return 0;
}

