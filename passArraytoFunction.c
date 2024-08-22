
// Pass arrays to a function in C 


/* Example 1: Pass Individual Arrays Elements  */

#include <stdio.h>

void display(int age1, int age2){
    printf("%d\n", age1);
    printf("%d\n", age2);
}

int main(){
    int ageArrayp[] = {3,5,6,8};

    // pass third and fourth array in display()

    display(ageArrayp[2], ageArrayp[3]);

    return 0;
}