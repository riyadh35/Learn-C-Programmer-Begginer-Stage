//It is also possible to pass addresses as arguments to functions . 
// To accept these addresses in the function definition, we can use pointers. It's because pointers are used to store addresses.

/* Syntax----------------------------------------- */

// void swap(int* n1, int* n2) {
//     ... ..
// }





// Example: Pass Addresses to Function;

/* #include <stdio.h>

void swap(int *n1, int *n2);

int main(){
    int num1 = 5, num2 = 10;

    // address of num1 and num2 is passed

    swap(&num1, &num2);
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    return 0;
}

void swap(int* n1, int* n2){
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}
 */


// Example 2: Passing Pointers to Functions 
#include <stdio.h>

void addOne(int* ptr){
    (*ptr)++; // adding 1 to *ptr

}

int main(){
    int* p,i = 10;
    p = &i;

    addOne(p);
    printf("%d", *p); //11

    return 0;
}